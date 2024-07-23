#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include<QMessageBox>
#include<QDateTime>>
#include"weatherTool.h"
#include<QPainter>
#define INCREMENT 3
#define POINT_RADIUS 3
#define TEXT_OFFSET_X 12
#define TEXT_OFFSET_Y 12
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);//设置无边框
    setFixedSize(width(),height());//设置固定大小
    ui->lineEdit->setPlaceholderText("请输入城市名称");
    //构建邮件菜单
    mExitMenu = new QMenu(this);
    mExitAct  = new QAction();
    mExitAct->setText("退出");
    mExitAct->setIcon(QIcon(":/res/close.png"));

    mExitMenu->addAction(mExitAct);//将菜单项添加到菜单中
    //将信号与槽函数绑定
    connect(mExitAct,&QAction::triggered,this,[=]{
        qApp->exit(0);
    });

    //将UI加入到控件列表中
    mWeekList<<ui->lbldate1<<ui->lbldate2<<ui->lbldate3<<ui->lbldate4<<ui->lbldate5;
    mDataList<<ui->lbldate01<<ui->lbldate02<<ui->lbldate03<<ui->lbldate04<<ui->lbldate05;
    mWeaList<<ui->lblwea01<<ui->lblwea02<<ui->lblwea03<<ui->lblwea04<<ui->lblwea05;
    mTypeList<<ui->lblType1<<ui->lblType2<<ui->lblType3<<ui->lblType4<<ui->lblType5;
    mAqiList<<ui->lblQ1<<ui->lblQ2<<ui->lblQ3<<ui->lblQ4<<ui->lblQ5;
    mFxList<<ui->lblfx1<<ui->lblfx2<<ui->lblfx3<<ui->lblfx4<<ui->lblfx5;

    mTypeMap.insert("暴雪",":/res/type/BaoXue.png");
    mTypeMap.insert("暴雨",":/res/type/BaoYu.png");
    mTypeMap.insert("暴雨到大暴雨",":/res/type/BaoYuDaoDaBaoYu.png");
    mTypeMap.insert("大暴雨",":/res/type/DaBaoYu.png");
    mTypeMap.insert("大暴雨到特大暴雨",":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    mTypeMap.insert("大到暴雨",":/res/type/DaDaoBaoYu.png");
    mTypeMap.insert("大雪",":/res/type/DaXue.png");
    mTypeMap.insert("大雨",":/res/type/DaYu.png");
    mTypeMap.insert("冬雨",":/res/type/DongYu.png");
    mTypeMap.insert("多云",":/res/type/DuoYun.png");
    mTypeMap.insert("浮尘",":/res/type/FuChen.png");
    mTypeMap.insert("雷阵雨",":/res/type/LeiZhenYu.png");
    mTypeMap.insert("雷阵雨伴有冰雹",":/res/type/LeiZhenYuBanYouBingBao.png");
    mTypeMap.insert("霾",":/res/type/Mai.png");
    mTypeMap.insert("强沙尘暴",":/res/type/QiangShaChenBao.png");
    mTypeMap.insert("晴",":/res/type/Qing.png");
    mTypeMap.insert("沙尘暴",":/res/type/ShaChenBao.png");
    mTypeMap.insert("特大暴雨",":/res/type/TeDaBaoYu.png");
    mTypeMap.insert("未定义",":/res/type/undefined.png");
    mTypeMap.insert("雾",":/res/type/Wu.png");
    mTypeMap.insert("小到中雪",":/res/type/XiaoDaoZhongXue.png");
    mTypeMap.insert("小到中雨",":/res/type/XiaoDaoZhongYu.png");
    mTypeMap.insert("小雪",":/res/type/XiaoXue.png");
    mTypeMap.insert("小雨",":/res/type/XiaoYu.png");
    mTypeMap.insert("雪",":/res/type/Xue.png");
    mTypeMap.insert("扬沙",":/res/type/YangSha.png");
    mTypeMap.insert("阴",":/res/type/Yin.png");
    mTypeMap.insert("雨",":/res/type/Yu.png");
    mTypeMap.insert("雨夹雪",":/res/type/YuJiaXue.png");
    mTypeMap.insert("阵雪",":/res/type/ZhenXue.png");
    mTypeMap.insert("阵雨",":/res/type/ZhenYu.png");
    mTypeMap.insert("中到大雪",":/res/type/ZhongDaoDaXue.png");
    mTypeMap.insert("中到大雨",":/res/type/ZhongDaoDaYu.png");
    mTypeMap.insert("中雪",":/res/type/ZhongXue.png");
    mTypeMap.insert("中雨",":/res/type/ZhongYu.png");



    mNetworkAccessManager = new QNetworkAccessManager(this);
    connect(mNetworkAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);
    getWeatherInfo("北京");


    //给标签添加事件过滤器
    //参数指定为this，也就是当前窗口对象MainWindow
    //当标签上有事件发生，当前窗口就会拦截事件并且执行过滤器函数
    ui->lblHcurve->installEventFilter(this);
    ui->lblLcurve ->installEventFilter(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}
/*实现右键退出*/
//重写父类虚函数//父类中默认的实现是忽略右键菜单事件//重写后就可以处理右键菜单事件
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    mExitMenu->exec(QCursor::pos());// QCursor::pos()返回鼠标单机的位置   exec（）出现菜单

}

/*实现右键后窗体跟随移动*/
void MainWindow::mousePressEvent(QMouseEvent *event)//QMouseEvent类中包含鼠标位置信息
{
    offset=event->globalPos()-this->pos();//计算窗口与鼠标的相对位置
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()-offset);//窗口位置=鼠标位置-相对位置
}

/*请求http*/
void MainWindow::getWeatherInfo(QString CityName)
{
    QString CityCode =weatherTool::getCityCode(CityName);
    if(CityCode.isEmpty()){
        QMessageBox::warning(this,"天气","输入有误",QMessageBox::Ok);
    }
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+CityCode);
    mNetworkAccessManager->get(QNetworkRequest(url));//会返回QNetworkReply
}

/*请求成功后接收json信息*/
void MainWindow::onReplied(QNetworkReply *reply)//reply中包含了请求到的所有信息
{
   // qDebug()<<"success";
    int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(reply->error()!=QNetworkReply::NoError||status_code!=200){
        qDebug() << "Error:" << reply->errorString();
    }else{
        QByteArray responseData = reply->readAll();
        parseJson(responseData);
        // qDebug() << "Response Data:" << responseData.data();
    }
}

/*处理JSON信息*/
void MainWindow::parseJson(QByteArray &bytearry)
{
    QJsonParseError err;
    QJsonDocument doc=QJsonDocument::fromJson(bytearry,&err);
    if(err.error!=QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj=doc.object();
   // qDebug()<<rootObj.value("message").toString();
    //解析日期\城市
    mToday.data=rootObj.value("date").toString();
    mToday.city=rootObj.value("cityInfo").toObject().value("city").toString();
    //解析昨天
    QJsonObject yesObj=rootObj.value("data").toObject().value("yesterday").toObject();
    mDay[0].week=yesObj.value("week").toString();
    mDay[0].data=yesObj.value("ymd").toString();
    mDay[0].type=yesObj.value("type").toString();
    QString s;
    s=yesObj.value("high").toString().split(" ").at(1);
    s.left(s.length()-1);
    mDay[0].hight=s.toInt();
    s=yesObj.value("low").toString().split(" ").at(1);
    s.left(s.length()-1);
    mDay[0].low=s.toInt();
    mDay[0].fl=yesObj.value("fl").toString();
    mDay[0].fx=yesObj.value("fx").toString();
    mDay[0].aqi=yesObj.value("aqi").toDouble();
    //解析forcast中五天数据
    QJsonObject dataObj=rootObj.value("data").toObject();
    QJsonArray forecastArr = dataObj.value("forecast").toArray();
    for(int i=0;i<5;i++){
        QJsonObject forecastObj = forecastArr[i].toObject();
        mDay[i].week=forecastObj.value("week").toString();
        mDay[i].data=forecastObj.value("ymd").toString();
        mDay[i].type=forecastObj.value("type").toString();
        QString s;
        /*  s=forecastObj.value("high").toString().split(" ").at(1);
         s=s.left(s.length()-1);
        qDebug()<<s;*/
        s=forecastObj.value("high").toString().split(" ").at(1);
        s=s.left(s.length()-1);
        mDay[i].hight=s.toInt();
        s=forecastObj.value("low").toString().split(" ").at(1);
        s=s.left(s.length()-1);
        mDay[i].low=s.toInt();

        mDay[i].fl=forecastObj.value("fl").toString();
        mDay[i].fx=forecastObj.value("fx").toString();
        mDay[i].aqi=forecastObj.value("aqi").toDouble();
    }
    //解析今天的数据
    mToday.ganmao=dataObj.value("ganmao").toString();
    mToday.wendu=dataObj.value("wendu").toString().toDouble();
    mToday.shidu=dataObj.value("shidu").toString();
    mToday.PM25=dataObj.value("pm25").toDouble();
    mToday.quality=dataObj.value("quality").toString();
    mToday.fl=mDay[0].fl;
    mToday.fx=mDay[0].fx;
    mToday.type=mDay[0].type;
    mToday.hight=mDay[0].hight;
    mToday.low=mDay[0].low;
    updateUI();
}

/*更新UI*/
void MainWindow::updateUI()
{
    //更新日期和城市
    ui->lblDate->setText(QDateTime::fromString(mToday.data,"yyyyMMdd").toString("yyyy/MM/dd")+" "+mDay[0].week);
    ui->lblCity->setText(mToday.city);
    //更新今天
    ui->lblwendu->setText(QString::number((mToday.wendu))+"℃");
    ui->lblType->setText(mToday.type);
    ui->lblHL->setText(QString::number(mToday.hight)+"~"+QString::number(mToday.low)+"℃");
    ui->lblGanMao->setText(" 生活提醒："+mToday.ganmao);
    ui->lblfs->setText(mToday.fl);
    ui->lblfx->setText(mToday.fx);
    ui->lblshidu->setText(mToday.shidu);
    ui->lblpm25->setText(QString::number(mToday.PM25));
    ui->lblquality->setText(mToday.quality);
   // qDebug()<<mToday.wendu<<mToday.hight<<mToday.low;
    ui->lblPic->setPixmap(mTypeMap[mToday.type]);
    //更新六天
    for(int i=0;i<5;i++){
        mWeekList[i]->setText("周"+mDay[i].week.right(1));
        ui->lbldate1->setText("今天");
        ui->lbldate2->setText("明天");
        QStringList ymdList = mDay[i].data.split('-');
        mDataList[i]->setText(ymdList[1]+"/"+ymdList[2]);
        mWeaList[i]->setText(mDay[i].type);
        mTypeList[i]->setPixmap(mTypeMap[mDay[i].type]);      if(mDay[i].aqi<=50){
            mAqiList[i]->setStyleSheet("background-color: rgb(121,184,0)");
            mAqiList[i]->setText("优");
        }
        else if(mDay[i].aqi<=100){
            mAqiList[i]->setStyleSheet("background-color: rgb(255,187,23)");
            mAqiList[i]->setText("良");
        }
        else if(mDay[i].aqi<=150){
            mAqiList[i]->setStyleSheet("background-color: rgb(255,87,97)");
            mAqiList[i]->setText("轻度");
        }
        else if(mDay[i].aqi<=200){
            mAqiList[i]->setStyleSheet("background-color: rgb(170,04,0)");
            mAqiList[i]->setText("重度");
        }
        else{
            mAqiList[i]->setStyleSheet("background-color: rgb(110,0,0)");
            mAqiList[i]->setText("严重");
        }
        mFxList[i]->setText(mDay[i].fx);
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString CityName =ui->lineEdit->text();
    getWeatherInfo(CityName);
    ui->lblHcurve->update();//更新温度曲线  运行此函数时，会被当前窗口捕获，当前窗口运行重写的eventer方法，其中调用实际的绘图函数
    ui->lblLcurve->update();
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched ==ui->lblHcurve&&event->type()==QEvent::Paint){//如果监控的是lblHcurve控件并且事件为Paint
        paintHighCurve();
    }
    if(watched == ui->lblLcurve&&event->type()==QEvent::Paint){
        paintLowCurve();
    }
    return QWidget::eventFilter(watched,event);
}

void MainWindow::paintHighCurve()
{
    QPainter painter(ui->lblHcurve);//将曲线绘制到此标签上
    painter.setRenderHint(QPainter::Antialiasing,true);//抗锯齿更平滑
    //获取x
    int px[5]={0};
    for(int i=0;i<5;i++){
        px[i]=mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
        qDebug()<<"H"<<mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
    }
    //获取y
    int py[5]={0};
    //求平均温度，高于平均值一度上移三个像素
    double tempsum=0;
    int tempAverage=0;
    for(int i=0;i<5;i++){
        tempsum+=(int)(mDay[i].hight);
    }
    tempAverage = tempsum/6;
    int mid=ui->lblHcurve->height()/2;
    for(int i=0;i<5;i++){

        py[i]=mid-((mDay[i].hight-tempAverage)*INCREMENT);

    }
    //开始绘制

    //初始化画笔
    QPen pen = painter.pen();
    pen.setWidth(1);
    pen.setColor(QColor(255,170,0));
    painter.setPen(pen);
    painter.setBrush(QColor(255,170,0));
    for(int i=0;i<5;i++){
        //显示点
        painter.drawEllipse(QPoint(px[i],py[i]+10),POINT_RADIUS,POINT_RADIUS);
        //显示文本
        painter.drawText(px[i]-3,py[i],QString::number(mDay[i].hight)+"℃");
    }
    //连线
    pen.setStyle(Qt::DotLine);//虚线
    painter.setPen(pen);
    painter.drawLine(px[0],py[0]+10,px[1],py[1]+10);
    pen.setStyle(Qt::SolidLine);//实线
    painter.setPen(pen);
    for(int i=0;i<4;i++){
        painter.drawLine(px[i],py[i]+10,px[i+1],py[i+1]+10);
    }

}

void MainWindow::paintLowCurve()
{
    QPainter painter(ui->lblLcurve);//将曲线绘制到此标签上
    painter.setRenderHint(QPainter::Antialiasing,true);//抗锯齿更平滑
    //获取x
    int px[5]={0};
    for(int i=0;i<5;i++){
        px[i]=mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
        qDebug()<<"L"<<mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
    }
    //获取y
    int py[5]={0};
    //求平均温度，高于平均值一度上移三个像素
    double tempsum=0;
    int tempAverage=0;
    for(int i=0;i<5;i++){
        tempsum+=(int)(mDay[i].low);
    }
    tempAverage = tempsum/6;
    int mid=ui->lblLcurve->height()/2;
    for(int i=0;i<5;i++){

        py[i]=mid-((mDay[i].low-tempAverage)*INCREMENT);

    }
    //开始绘制

    //初始化画笔
    QPen pen = painter.pen();
    pen.setWidth(1);
    pen.setColor(QColor(0,170,255));
    painter.setPen(pen);
    painter.setBrush(QColor(0,170,255));
    for(int i=0;i<5;i++){
        //显示点
        painter.drawEllipse(QPoint(px[i],py[i]+10),POINT_RADIUS,POINT_RADIUS);
        //显示文本
        painter.drawText(px[i]-3,py[i],QString::number(mDay[i].low)+"℃");
    }
    //连线
    pen.setStyle(Qt::DotLine);//虚线
    painter.setPen(pen);
    painter.drawLine(px[0],py[0]+10,px[1],py[1]+10);
    pen.setStyle(Qt::SolidLine);//实线
    painter.setPen(pen);
    for(int i=0;i<4;i++){
        painter.drawLine(px[i],py[i]+10,px[i+1],py[i+1]+10);
    }
}
