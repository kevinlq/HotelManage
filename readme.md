## 基于Qt的酒店管理系统demo

| 开发平台 | windows7  64|
|--|--|
|开发软件 |Qt 4.8.6|
|编译器|mingw32|
|时间|2014年12月27日|
|数据库 | mysql|


![home](/screen/home.png)

## 版本说明

- v1,0

基础版本，采用Qt4开发

- v2.0

兼容Qt5,消除编译错误,可以正常运行.


## change log

- 2020年3月19日23:22:48

一直以来初学朋友反这份代码编不过，各种错误无法解决，今天晚上抽时间更新了下，兼容Qt5。


## Q&A 

### 关于运行提示数据库打开失败问题

软件数据库使用`mysql`, 需要你再运行前配置下你的mysql，具体配置信息如下所示

```
    db.setHostName("127.0.0.1");                            //本地地址（若要远程链接，输入相应的地址）
    db.setPort(3306);                                       //设置端口号
    db.setDatabaseName("hotel");                            //设置数据库的名字
    db.setUserName("root");                                 //设置用户名字
    db.setPassword("123456");                               //设置密码
```

打开本工程目录下的 `doc`文件夹，执行`hotel.sql` 语句，将基本表结构导入到你的数据库中即可。
具体如何导入请百度。


- [参考这个 CSDN](https://blog.csdn.net/u013704336/article/details/45891903)
