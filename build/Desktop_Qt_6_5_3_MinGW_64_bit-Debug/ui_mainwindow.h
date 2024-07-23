/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *lblDate;
    QWidget *widget_3;
    QLabel *lblPic;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QLabel *lblwendu;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblCity;
    QLabel *lblType;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblHL;
    QLabel *lblGanMao;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QWidget *widget_6;
    QLabel *label_8;
    QLabel *lblfx;
    QLabel *lblfs;
    QWidget *widget_7;
    QLabel *label_10;
    QLabel *lblpm25;
    QLabel *label_3;
    QWidget *widget_8;
    QLabel *label_14;
    QLabel *lblshidu;
    QLabel *label;
    QWidget *widget_9;
    QLabel *label_16;
    QLabel *lblquality;
    QLabel *label_4;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbldate1;
    QLabel *lbldate2;
    QLabel *lbldate3;
    QLabel *lbldate4;
    QLabel *lbldate5;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblType1;
    QLabel *lblType2;
    QLabel *lblType3;
    QLabel *lblType4;
    QLabel *lblType5;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblQ1;
    QLabel *lblQ2;
    QLabel *lblQ3;
    QLabel *lblQ4;
    QLabel *lblQ5;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblfx1;
    QLabel *lblfx2;
    QLabel *lblfx3;
    QLabel *lblfx4;
    QLabel *lblfx5;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbldate01;
    QLabel *lbldate02;
    QLabel *lbldate03;
    QLabel *lbldate04;
    QLabel *lbldate05;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblwea01;
    QLabel *lblwea02;
    QLabel *lblwea03;
    QLabel *lblwea04;
    QLabel *lblwea05;
    QLabel *lblHcurve;
    QLabel *lblLcurve;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -10, 801, 521));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget {\n"
"                                 background-image: url(:/res/background.png);\n"
"\n"
"                                 }\n"
"QLabel{\n"
"border-radius:4px;\n"
"background-color:rgba(60, 60, 60, 100);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"color:rgb(255, 255, 255);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 10, 801, 61));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblDate = new QLabel(widget_2);
        lblDate->setObjectName("lblDate");
        lblDate->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgba(0, 0, 0, 0)"));

        horizontalLayout->addWidget(lblDate);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 70, 381, 121));
        widget_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"color:rgb(255, 255, 255);"));
        lblPic = new QLabel(widget_3);
        lblPic->setObjectName("lblPic");
        lblPic->setGeometry(QRect(11, 11, 111, 91));
        lblPic->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0)"));
        lblPic->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lblPic->setScaledContents(true);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(120, 0, 261, 131));
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName("gridLayout");
        lblwendu = new QLabel(widget_4);
        lblwendu->setObjectName("lblwendu");
        lblwendu->setStyleSheet(QString::fromUtf8("font: 36pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);"));
        lblwendu->setScaledContents(false);

        gridLayout->addWidget(lblwendu, 0, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(37, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        lblCity = new QLabel(widget_4);
        lblCity->setObjectName("lblCity");
        lblCity->setStyleSheet(QString::fromUtf8("font: 15pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);"));

        gridLayout->addWidget(lblCity, 0, 3, 1, 1);

        lblType = new QLabel(widget_4);
        lblType->setObjectName("lblType");
        lblType->setStyleSheet(QString::fromUtf8("font: 15pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(lblType, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(76, 43, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        lblHL = new QLabel(widget_4);
        lblHL->setObjectName("lblHL");
        lblHL->setStyleSheet(QString::fromUtf8("font: 15pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(lblHL, 1, 2, 1, 2);

        lblGanMao = new QLabel(widget);
        lblGanMao->setObjectName("lblGanMao");
        lblGanMao->setGeometry(QRect(10, 210, 371, 51));
        lblGanMao->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(10, 270, 351, 221));
        widget_5->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);\n"
"color:rgb(255, 255, 255);\n"
"border-radius:20px;\n"
"QLabel{\n"
"\n"
"background-color:rgba(0,0, 0,0);\n"
"}"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        label_8 = new QLabel(widget_6);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 20, 51, 61));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        label_8->setScaledContents(true);
        lblfx = new QLabel(widget_6);
        lblfx->setObjectName("lblfx");
        lblfx->setGeometry(QRect(100, 10, 51, 19));
        lblfs = new QLabel(widget_6);
        lblfs->setObjectName("lblfs");
        lblfs->setGeometry(QRect(100, 50, 30, 19));

        gridLayout_2->addWidget(widget_6, 0, 0, 1, 1);

        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName("widget_7");
        label_10 = new QLabel(widget_7);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 10, 61, 61));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        label_10->setScaledContents(true);
        lblpm25 = new QLabel(widget_7);
        lblpm25->setObjectName("lblpm25");
        lblpm25->setGeometry(QRect(104, 52, 46, 19));
        label_3 = new QLabel(widget_7);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(104, 11, 46, 19));

        gridLayout_2->addWidget(widget_7, 0, 1, 1, 1);

        widget_8 = new QWidget(widget_5);
        widget_8->setObjectName("widget_8");
        label_14 = new QLabel(widget_8);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 20, 51, 41));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        label_14->setScaledContents(true);
        lblshidu = new QLabel(widget_8);
        lblshidu->setObjectName("lblshidu");
        lblshidu->setGeometry(QRect(100, 40, 30, 19));
        label = new QLabel(widget_8);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 30, 19));

        gridLayout_2->addWidget(widget_8, 1, 0, 1, 1);

        widget_9 = new QWidget(widget_5);
        widget_9->setObjectName("widget_9");
        label_16 = new QLabel(widget_9);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 20, 51, 51));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/res/aqi.png")));
        label_16->setScaledContents(true);
        lblquality = new QLabel(widget_9);
        lblquality->setObjectName("lblquality");
        lblquality->setGeometry(QRect(90, 52, 60, 19));
        label_4 = new QLabel(widget_9);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 11, 60, 19));

        gridLayout_2->addWidget(widget_9, 1, 1, 1, 1);

        widget_10 = new QWidget(widget);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(400, 70, 391, 51));
        widget_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                   \n"
"text-align: center;\n"
"                          \n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget_10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbldate1 = new QLabel(widget_10);
        lbldate1->setObjectName("lbldate1");
        lbldate1->setStyleSheet(QString::fromUtf8("\n"
"width: 5px;height:5px;"));
        lbldate1->setTextFormat(Qt::MarkdownText);
        lbldate1->setScaledContents(false);
        lbldate1->setAlignment(Qt::AlignCenter);
        lbldate1->setOpenExternalLinks(true);
        lbldate1->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(lbldate1);

        lbldate2 = new QLabel(widget_10);
        lbldate2->setObjectName("lbldate2");
        lbldate2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbldate2);

        lbldate3 = new QLabel(widget_10);
        lbldate3->setObjectName("lbldate3");
        lbldate3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbldate3);

        lbldate4 = new QLabel(widget_10);
        lbldate4->setObjectName("lbldate4");
        lbldate4->setStyleSheet(QString::fromUtf8("\n"
"                             width: 5px;\n"
"                             height:5px;\n"
"text-align: center;"));
        lbldate4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbldate4);

        lbldate5 = new QLabel(widget_10);
        lbldate5->setObjectName("lbldate5");
        lbldate5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbldate5);

        widget_11 = new QWidget(widget);
        widget_11->setObjectName("widget_11");
        widget_11->setGeometry(QRect(400, 170, 391, 61));
        widget_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                   \n"
"text-align: center;\n"
"                          \n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblType1 = new QLabel(widget_11);
        lblType1->setObjectName("lblType1");
        lblType1->setStyleSheet(QString::fromUtf8("\n"
"width: 5px;height:5px;"));
        lblType1->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoXue.png")));
        lblType1->setScaledContents(false);
        lblType1->setAlignment(Qt::AlignCenter);
        lblType1->setOpenExternalLinks(false);

        horizontalLayout_3->addWidget(lblType1);

        lblType2 = new QLabel(widget_11);
        lblType2->setObjectName("lblType2");
        lblType2->setTextFormat(Qt::AutoText);
        lblType2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DaXue.png")));
        lblType2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType2);

        lblType3 = new QLabel(widget_11);
        lblType3->setObjectName("lblType3");
        lblType3->setPixmap(QPixmap(QString::fromUtf8(":/res/type/QiangShaChenBao.png")));
        lblType3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType3);

        lblType4 = new QLabel(widget_11);
        lblType4->setObjectName("lblType4");
        lblType4->setStyleSheet(QString::fromUtf8("\n"
"                             width: 5px;\n"
"                             height:5px;\n"
"text-align: center;"));
        lblType4->setPixmap(QPixmap(QString::fromUtf8("res/type/ZhenYu.png")));
        lblType4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType4);

        lblType5 = new QLabel(widget_11);
        lblType5->setObjectName("lblType5");
        lblType5->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        lblType5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType5);

        widget_12 = new QWidget(widget);
        widget_12->setObjectName("widget_12");
        widget_12->setGeometry(QRect(400, 410, 391, 51));
        widget_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                   \n"
"text-align: center;\n"
"                          \n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_12);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblQ1 = new QLabel(widget_12);
        lblQ1->setObjectName("lblQ1");
        lblQ1->setStyleSheet(QString::fromUtf8("\n"
"width: 5px;height:5px;"));
        lblQ1->setScaledContents(false);
        lblQ1->setAlignment(Qt::AlignCenter);
        lblQ1->setOpenExternalLinks(false);

        horizontalLayout_4->addWidget(lblQ1);

        lblQ2 = new QLabel(widget_12);
        lblQ2->setObjectName("lblQ2");
        lblQ2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblQ2);

        lblQ3 = new QLabel(widget_12);
        lblQ3->setObjectName("lblQ3");
        lblQ3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblQ3);

        lblQ4 = new QLabel(widget_12);
        lblQ4->setObjectName("lblQ4");
        lblQ4->setStyleSheet(QString::fromUtf8("\n"
"                             width: 5px;\n"
"                             height:5px;\n"
"text-align: center;"));
        lblQ4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblQ4);

        lblQ5 = new QLabel(widget_12);
        lblQ5->setObjectName("lblQ5");
        lblQ5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblQ5);

        widget_13 = new QWidget(widget);
        widget_13->setObjectName("widget_13");
        widget_13->setGeometry(QRect(400, 450, 391, 51));
        widget_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                   \n"
"text-align: center;\n"
"                          \n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(widget_13);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lblfx1 = new QLabel(widget_13);
        lblfx1->setObjectName("lblfx1");
        lblfx1->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblfx1);

        lblfx2 = new QLabel(widget_13);
        lblfx2->setObjectName("lblfx2");
        lblfx2->setStyleSheet(QString::fromUtf8("\n"
"width: 5px;height:5px;"));
        lblfx2->setScaledContents(false);
        lblfx2->setAlignment(Qt::AlignCenter);
        lblfx2->setOpenExternalLinks(false);

        horizontalLayout_5->addWidget(lblfx2);

        lblfx3 = new QLabel(widget_13);
        lblfx3->setObjectName("lblfx3");
        lblfx3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblfx3);

        lblfx4 = new QLabel(widget_13);
        lblfx4->setObjectName("lblfx4");
        lblfx4->setStyleSheet(QString::fromUtf8("\n"
"                             width: 5px;\n"
"                             height:5px;\n"
"text-align: center;"));
        lblfx4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblfx4);

        lblfx5 = new QLabel(widget_13);
        lblfx5->setObjectName("lblfx5");
        lblfx5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblfx5);

        widget_14 = new QWidget(widget);
        widget_14->setObjectName("widget_14");
        widget_14->setGeometry(QRect(400, 120, 391, 51));
        widget_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                   \n"
"text-align: center;\n"
"                          \n"
"}"));
        horizontalLayout_6 = new QHBoxLayout(widget_14);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lbldate01 = new QLabel(widget_14);
        lbldate01->setObjectName("lbldate01");
        lbldate01->setStyleSheet(QString::fromUtf8("\n"
"width: 5px;height:5px;"));
        lbldate01->setScaledContents(false);
        lbldate01->setAlignment(Qt::AlignCenter);
        lbldate01->setOpenExternalLinks(false);

        horizontalLayout_6->addWidget(lbldate01);

        lbldate02 = new QLabel(widget_14);
        lbldate02->setObjectName("lbldate02");
        lbldate02->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbldate02);

        lbldate03 = new QLabel(widget_14);
        lbldate03->setObjectName("lbldate03");
        lbldate03->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbldate03);

        lbldate04 = new QLabel(widget_14);
        lbldate04->setObjectName("lbldate04");
        lbldate04->setStyleSheet(QString::fromUtf8("\n"
"                             width: 5px;\n"
"                             height:5px;\n"
"text-align: center;"));
        lbldate04->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbldate04);

        lbldate05 = new QLabel(widget_14);
        lbldate05->setObjectName("lbldate05");
        lbldate05->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbldate05);

        widget_15 = new QWidget(widget);
        widget_15->setObjectName("widget_15");
        widget_15->setGeometry(QRect(400, 230, 391, 51));
        widget_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                   \n"
"text-align: center;\n"
"                          \n"
"}"));
        horizontalLayout_7 = new QHBoxLayout(widget_15);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lblwea01 = new QLabel(widget_15);
        lblwea01->setObjectName("lblwea01");
        lblwea01->setStyleSheet(QString::fromUtf8("\n"
"width: 5px;height:5px;"));
        lblwea01->setScaledContents(false);
        lblwea01->setAlignment(Qt::AlignCenter);
        lblwea01->setOpenExternalLinks(false);

        horizontalLayout_7->addWidget(lblwea01);

        lblwea02 = new QLabel(widget_15);
        lblwea02->setObjectName("lblwea02");
        lblwea02->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lblwea02);

        lblwea03 = new QLabel(widget_15);
        lblwea03->setObjectName("lblwea03");
        lblwea03->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lblwea03);

        lblwea04 = new QLabel(widget_15);
        lblwea04->setObjectName("lblwea04");
        lblwea04->setStyleSheet(QString::fromUtf8("\n"
"                             width: 5px;\n"
"                             height:5px;\n"
"text-align: center;"));
        lblwea04->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lblwea04);

        lblwea05 = new QLabel(widget_15);
        lblwea05->setObjectName("lblwea05");
        lblwea05->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lblwea05);

        lblHcurve = new QLabel(widget);
        lblHcurve->setObjectName("lblHcurve");
        lblHcurve->setGeometry(QRect(400, 290, 371, 51));
        lblLcurve = new QLabel(widget);
        lblLcurve->setObjectName("lblLcurve");
        lblLcurve->setGeometry(QRect(400, 340, 371, 51));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QString());
        lblDate->setText(QCoreApplication::translate("MainWindow", "2022/08/23/\346\230\237\346\234\237\345\205\255", nullptr));
        lblPic->setText(QString());
        lblwendu->setText(QCoreApplication::translate("MainWindow", "32\342\204\203", nullptr));
        lblCity->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\256\211", nullptr));
        lblType->setText(QCoreApplication::translate("MainWindow", "\346\231\264\345\244\251", nullptr));
        lblHL->setText(QCoreApplication::translate("MainWindow", "19-35\342\204\203", nullptr));
        lblGanMao->setText(QString());
        label_8->setText(QString());
        lblfx->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221", nullptr));
        lblfs->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237", nullptr));
        label_10->setText(QString());
        lblpm25->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        label_14->setText(QString());
        lblshidu->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label_16->setText(QString());
        lblquality->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lbldate1->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lbldate2->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lbldate3->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\270\200", nullptr));
        lbldate4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\214", nullptr));
        lbldate5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\270\211", nullptr));
        lblType1->setText(QString());
        lblType2->setText(QString());
        lblType3->setText(QString());
        lblType4->setText(QString());
        lblType5->setText(QString());
        lblQ1->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblQ2->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lblQ3->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        lblQ4->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        lblQ5->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        lblfx1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\214\227\351\243\216", nullptr));
        lblfx2->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblfx3->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblfx4->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\215\227\351\243\216", nullptr));
        lblfx5->setText(QCoreApplication::translate("MainWindow", "\350\245\277\351\243\216", nullptr));
        lbldate01->setText(QCoreApplication::translate("MainWindow", "1.1", nullptr));
        lbldate02->setText(QCoreApplication::translate("MainWindow", "1.2", nullptr));
        lbldate03->setText(QCoreApplication::translate("MainWindow", "1.3", nullptr));
        lbldate04->setText(QCoreApplication::translate("MainWindow", "1.4", nullptr));
        lbldate05->setText(QCoreApplication::translate("MainWindow", "1.5", nullptr));
        lblwea01->setText(QCoreApplication::translate("MainWindow", "\345\244\247\351\233\250", nullptr));
        lblwea02->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        lblwea03->setText(QCoreApplication::translate("MainWindow", "\351\276\231\345\215\267\351\243\216", nullptr));
        lblwea04->setText(QCoreApplication::translate("MainWindow", "\351\230\264\345\244\251", nullptr));
        lblwea05->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lblHcurve->setText(QString());
        lblLcurve->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
