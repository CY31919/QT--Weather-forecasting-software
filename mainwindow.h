#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include<QMouseEvent>
#include<QLabel>

//#include<QtNetwork/QNetworkAccessManager>//接收
//#include<QtNetwork/QNetworkReply>//响应
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include<QDebug>
#include"weatherdata.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
protected :
    void contextMenuEvent(QContextMenuEvent *event);
    void mousePressEvent(QMouseEvent*event);//重点击事件和移动事件
    void mouseMoveEvent(QMouseEvent*event);
    void parseJson(QByteArray &bytearry);
private slots:
    void on_pushButton_clicked();

private:
    void onReplied(QNetworkReply*reply);//接收数据成功后处理、
    void getWeatherInfo(QString CityName);
    void updateUI();

    //重写父类的eventfilter
    bool eventFilter(QObject*watched,QEvent*event);
    //绘制高低温曲线
    void paintHighCurve();
    void paintLowCurve();

private:
    QMenu* mExitMenu;//邮件退出的菜单
    QAction *mExitAct;//退出的菜单项

    QPoint offset;//鼠标与窗口的相对位置
    QNetworkAccessManager *mNetworkAccessManager;

    Today mToday;
    Day mDay[6];

    QList<QLabel*> mWeekList;
    QList<QLabel*> mDataList;
    QList<QLabel*> mWeaList;
    QList<QLabel*> mTypeList;
    QList<QLabel*> mAqiList;
    QList<QLabel*> mFxList;
    //QList<QLabel*> mWeekList;

    QMap<QString,QString> mTypeMap;

};
#endif // MAINWINDOW_H
