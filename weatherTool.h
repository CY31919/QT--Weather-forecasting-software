#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H
#include<QString>
#include<QMap>
#include<QFile>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonParseError>
#include<QJsonValue>
#include<QMessageBox>
class weatherTool{
private:
    static QMap<QString,QString> mCityMap;
    static void initCityMap(){
        //1.读取文件
        QFile file("C:\\Users\\31919\\Documents\\Tencent Files\\319198141\\FileRecv\\citycode.json");
        file.open(QIODevice::ReadOnly);
        QByteArray filearr = file.readAll();
        file.close();
        //2.解析文件
        QJsonParseError err;
        QJsonDocument doc =QJsonDocument::fromJson(filearr,&err);
        if(err.error!=QJsonParseError::NoError){
            return;
        }
        if(!doc.isArray()){
            return;
        }
        QJsonArray cities=doc.array();
        for(int i=0;i<cities.size();i++){
            QString Name=cities[i].toObject().value("city_name").toString();
            QString Code=cities[i].toObject().value("city_code").toString();
            if(!Code.isEmpty()){
            mCityMap.insert(Name,Code);
            }
        }
    }
public:
    static QString getCityCode(QString cityName){
        if(mCityMap.isEmpty()){
            initCityMap();
        }

        auto it = mCityMap.find(cityName);//返回的是迭代器
        if(it==mCityMap.end()){
            auto it1 = mCityMap.find(cityName+"市");
            if(it1==mCityMap.end()){
                auto it2 = mCityMap.find(cityName+"县");
                if(it2==mCityMap.end()){
                    auto it3 = mCityMap.find(cityName+"区");
                    if(it3==mCityMap.end()){

                        return "";
                    } else{
                        return it3.value();
                    }
                } else{
                    return it2.value();
                }
            }else{
                return it1.value();
            }
        }else{
            return it.value();
        }
    }
};

QMap<QString,QString> weatherTool::mCityMap={};//初始化静态变量
#endif // WEATHERTOOL_H
