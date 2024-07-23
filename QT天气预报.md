# QT天气预报

## 1.效果展示

默认展示北京的天气信息，输入城市名称后展示该城市从今天到四天后的天气类型，最高温度，最低温度，风向，空气质量。

## 2.整体思路

通过“http://t.weather.itboy.net/api/weather/city/CityCode”此*`url`*获得包含对应城市码的天气信息的`Json`格式数据，数据中包含包括今天在内的15天的天气信息，解析出此文件信息，并展示到各个控件中。

## 3.细节

### 3.1图片信息

所有天气相关的图片存储在一个`Map<QString,QString>`中，key是天气名称，value是图片在资源文件夹下的路径，例如：暴雪天气图标：`("暴雪",":/res/type/BaoXue.png")`。

### 3.2控件列表

预报天气的Label可以放入控件列表中，方便循环操作，例如关于展示未来五天的日期`Label`,`lbldate01、lbldate02、lbldate03、lbldate04、lbldate05`，建立控件列表`QList<QLabel*> mDataList;`将标签插入其中。

### 3.3绘画折线图

给展示折线图的Label，添加事件过滤器，参数指定为this，也就是当前窗口对象`MainWindow`，并且重写`MainWindow::eventFilter（）`在此函数中调用绘画函数，这样当调用Label中的update()此函数时，会被当前窗口捕获，当前窗口运行重写的`eventFilter（）`方法，其中调用实际的绘图函数。

### 3.4怎么通过`cityName`转换出`cityCode`

所有的城市所对应的`cityCode`都储存在`citycode.json`文件中，解析此`JSON`文件，并将`cityNam`e和`cityCode`存储在`QMap<QString,QString> mCityMap`中，当在`lineEdit`中输入城市名称时，可以通过此`Map`查找到对应的`cityCode`。