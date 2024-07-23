#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include<QString>
#include<QJsonDocument>
#include<QJsonArray>
#include<QJsonObject>
class Today{

public:
    Today(){
        data="2022-10-20";
        city="西安";
        ganmao="感冒指数";
        wendu =0;
        shidu = "0%";
        PM25 = 0;
        quality="无数据";
        type= "多云";
        fl="2级别";
        fx="南风";
        hight = 30;
        low = 18;
    }
    QString data;
    QString city;
    QString ganmao;
    double wendu;
    QString shidu;
    int PM25;
    QString quality;
    QString type;
    QString fx;
    QString fl;
    int hight;
    int low;
};
class Day{
public:
    Day(){
        data="2022-10-20";
        week = "周五";
        type= "多云";
        hight = 30;
        low = 18;
        fl="2级别";
        fx="南风";
        aqi = 0;
    }
    QString data;
    QString week;
    QString quality;
    QString type;
    QString fx;
    QString fl;
    int hight;
    int low;
    int aqi;
};
#endif // WEATHERDATA_H
