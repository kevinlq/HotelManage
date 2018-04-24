-- MySQL dump 10.13  Distrib 5.6.21, for Win64 (x86_64)
--
-- Host: localhost    Database: hotel
-- ------------------------------------------------------
-- Server version	5.6.21-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `book`
--

DROP TABLE IF EXISTS `book`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `book` (
  `Id` varchar(20) NOT NULL,
  `roomno` varchar(10) DEFAULT NULL,
  `BookName` varchar(20) DEFAULT NULL,
  `roomtypeid` int(11) DEFAULT NULL,
  `BookTimeFrom` varchar(20) DEFAULT NULL,
  `booktimeto` varchar(20) DEFAULT NULL,
  `BookRemark` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`Id`),
  KEY `RoomTypeId` (`roomtypeid`),
  CONSTRAINT `book_ibfk_1` FOREIGN KEY (`roomtypeid`) REFERENCES `roomtype` (`RoomTypeId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `book`
--

LOCK TABLES `book` WRITE;
/*!40000 ALTER TABLE `book` DISABLE KEYS */;
INSERT INTO `book` VALUES ('201420141225190344','104','2014',1,'2014-12-25','2014-12-25',' ');
/*!40000 ALTER TABLE `book` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `currentuser`
--

DROP TABLE IF EXISTS `currentuser`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `currentuser` (
  `UserName` varchar(30) NOT NULL,
  `UserType` varchar(30) NOT NULL,
  `UserPwd` varchar(30) NOT NULL,
  PRIMARY KEY (`UserName`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `currentuser`
--

LOCK TABLES `currentuser` WRITE;
/*!40000 ALTER TABLE `currentuser` DISABLE KEYS */;
/*!40000 ALTER TABLE `currentuser` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customelogblog`
--

DROP TABLE IF EXISTS `customelogblog`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `customelogblog` (
  `CustomeName` varchar(20) NOT NULL,
  `custometype` varchar(20) DEFAULT NULL,
  `CustomePwd` varchar(20) NOT NULL,
  PRIMARY KEY (`CustomeName`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customelogblog`
--

LOCK TABLES `customelogblog` WRITE;
/*!40000 ALTER TABLE `customelogblog` DISABLE KEYS */;
INSERT INTO `customelogblog` VALUES ('2014','一般顾客','123456');
/*!40000 ALTER TABLE `customelogblog` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customer`
--

DROP TABLE IF EXISTS `customer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `customer` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `CustomerName` varchar(100) DEFAULT NULL,
  `CustomerSex` varchar(4) DEFAULT NULL,
  `CustomerPassword` varchar(100) DEFAULT NULL,
  `CustomerPhone` varchar(20) DEFAULT NULL,
  `CustomerAddress` varchar(50) DEFAULT NULL,
  `CustomerData` datetime DEFAULT NULL,
  `CustomerRemark` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB AUTO_INCREMENT=2021 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customer`
--

LOCK TABLES `customer` WRITE;
/*!40000 ALTER TABLE `customer` DISABLE KEYS */;
INSERT INTO `customer` VALUES (2014,'张超','男','123456','15383465606','山西省阳泉市','2000-01-01 00:00:00','张老板'),(2015,'曹东山','男','123456','15383465640','山西省太原市太原工业学院','2014-12-22 00:00:00',''),(2016,'张益达','男','123456','15388456741','山西省太原市小店','2014-12-22 00:00:00',''),(2017,'莉莉','女','123456','13245365678','北京市海定区','2014-12-23 00:00:00',''),(2018,'冯晨成','男','123456','12378945678','太原工业学院','2014-12-23 00:00:00',''),(2019,'贺景新','女','123456','17484849595','山西省、太原市、太原工业学院22#309','2014-12-24 00:00:00',''),(2020,'张俪','女','123456','18293949343','天津市津霸路口','2014-12-25 00:00:00','');
/*!40000 ALTER TABLE `customer` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `inroom`
--

DROP TABLE IF EXISTS `inroom`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `inroom` (
  `RoomNo` varchar(20) DEFAULT NULL,
  `RoomTypeId` int(11) DEFAULT NULL,
  `InRoomTime` varchar(20) DEFAULT NULL,
  `InRoomName` varchar(20) DEFAULT NULL,
  `InRoomIdCard` varchar(18) DEFAULT NULL,
  `InRoomGender` varchar(4) DEFAULT NULL,
  `InRoomPhone` varchar(20) DEFAULT NULL,
  `InRoomCash` varchar(20) DEFAULT NULL,
  `InRoomOrder` varchar(50) NOT NULL,
  `InRoomRemark` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`InRoomOrder`),
  KEY `RoomTypeId` (`RoomTypeId`),
  KEY `RoomNo` (`RoomNo`),
  CONSTRAINT `inroom_ibfk_1` FOREIGN KEY (`RoomTypeId`) REFERENCES `roomtype` (`RoomTypeId`),
  CONSTRAINT `inroom_ibfk_2` FOREIGN KEY (`RoomNo`) REFERENCES `room` (`RoomNo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `inroom`
--

LOCK TABLES `inroom` WRITE;
/*!40000 ALTER TABLE `inroom` DISABLE KEYS */;
INSERT INTO `inroom` VALUES ('101',1,'2014-12-25','张超','622723199011222121','男','13809007893','1000','','');
/*!40000 ALTER TABLE `inroom` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `logblog`
--

DROP TABLE IF EXISTS `logblog`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `logblog` (
  `TriggerTimer` varchar(50) NOT NULL,
  `Trigger` varchar(20) NOT NULL,
  `TriggerContent` varchar(45) NOT NULL,
  `TriggerUser` varchar(45) NOT NULL,
  PRIMARY KEY (`TriggerTimer`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `logblog`
--

LOCK TABLES `logblog` WRITE;
/*!40000 ALTER TABLE `logblog` DISABLE KEYS */;
INSERT INTO `logblog` VALUES ('2014-12-24 18:29:39 周三','登录','登录系统','管理员'),('2014-12-24 18:48:03 周三','登录','登录系统','管理员'),('2014-12-24 18:48:54 周三','登录','登录系统','管理员'),('2014-12-24 18:50:03 周三','登录','登录系统','管理员'),('2014-12-24 18:50:56 周三','登录','登录系统','管理员'),('2014-12-24 18:52:45 周三','登录','登录系统','管理员'),('2014-12-24 18:56:31 周三','登录','登录系统','管理员'),('2014-12-24 19:10:50 周三','登录','登录系统','管理员'),('2014-12-24 19:20:29 周三','登录','登录系统','管理员'),('2014-12-24 19:22:03 周三','登录','登录系统','管理员'),('2014-12-24 19:22:19 周三','登录','登录系统','管理员'),('2014-12-24 19:22:52 周三','登录','登录系统','管理员'),('2014-12-24 19:23:31 周三','登录','登录系统','管理员'),('2014-12-24 19:24:04 周三','登录','登录系统','管理员'),('2014-12-24 19:30:51 周三','登录','登录系统','管理员'),('2014-12-24 19:31:31 周三','登录','登录系统','管理员'),('2014-12-24 19:44:18 周三','登录','登录系统','管理员'),('2014-12-24 19:53:18 周三','登录','登录系统','管理员'),('2014-12-24 21:24:14 周三','登录','登录系统','管理员'),('2014-12-24 22:09:43 周三','登录','登录系统','管理员'),('2014-12-24 22:11:49 周三','登录','登录系统','管理员'),('2014-12-24 22:12:20 周三','登录','登录系统','管理员'),('2014-12-24 22:13:13 周三','登录','登录系统','管理员'),('2014-12-24 22:14:11 周三','登录','登录系统','管理员'),('2014-12-24 22:15:14 周三','登录','登录系统','管理员'),('2014-12-24 22:15:47 周三','登录','登录系统','管理员'),('2014-12-24 22:16:32 周三','登录','登录系统','管理员'),('2014-12-24 22:17:33 周三','登录','登录系统','管理员'),('2014-12-24 22:19:05 周三','登录','登录系统','管理员'),('2014-12-24 22:19:41 周三','登录','登录系统','管理员'),('2014-12-24 22:20:29 周三','登录','登录系统','管理员'),('2014-12-24 22:22:41 周三','登录','登录系统','管理员'),('2014-12-24 22:27:08 周三','登录','登录系统','管理员'),('2014-12-24 22:28:52 周三','登录','登录系统','管理员'),('2014-12-24 22:38:17 周三','登录','登录系统','管理员'),('2014-12-24 23:00:02 周三','登录','登录系统','管理员'),('2014-12-24 23:03:11 周三','登录','登录系统','管理员'),('2014-12-24 23:05:21 周三','登录','登录系统','管理员'),('2014-12-24 23:07:21 周三','登录','登录系统','管理员'),('2014-12-24 23:09:03 周三','登录','登录系统','管理员'),('2014-12-24 23:10:30 周三','登录','登录系统','管理员'),('2014-12-24 23:21:04 周三','登录','登录系统','管理员'),('2014-12-24 23:24:28 周三','登录','登录系统','管理员'),('2014-12-24 23:28:29 周三','登录','登录系统','管理员'),('2014-12-24 23:29:39 周三','登录','登录系统','管理员'),('2014-12-24 23:30:41 周三','来客登记','新客人入住','管理员'),('2014-12-24 23:35:04 周三','登录','登录系统','管理员'),('2014-12-24 23:40:08 周三','登录','登录系统','管理员'),('2014-12-24 23:46:35 周三','登录','登录系统','管理员'),('2014-12-24 23:48:46 周三','登录','登录系统','管理员'),('2014-12-24 23:50:52 周三','登录','登录系统','管理员'),('2014-12-24 23:52:21 周三','登录','登录系统','管理员'),('2014-12-24 23:58:42 周三','登录','登录系统','管理员'),('2014-12-24 23:59:50 周三','登录','登录系统','管理员'),('2014-12-25 00:01:01 周四','登录','登录系统','管理员'),('2014-12-25 00:02:56 周四','登录','登录系统','管理员'),('2014-12-25 00:08:27 周四','登录','登录系统','管理员'),('2014-12-25 00:10:13 周四','登录','登录系统','管理员'),('2014-12-25 00:11:14 周四','登录','登录系统','管理员'),('2014-12-25 00:12:44 周四','登录','登录系统','管理员'),('2014-12-25 00:14:13 周四','登录','登录系统','管理员'),('2014-12-25 00:16:38 周四','登录','登录系统','管理员'),('2014-12-25 00:17:43 周四','登录','登录系统','管理员'),('2014-12-25 00:23:18 周四','登录','登录系统','管理员'),('2014-12-25 00:24:25 周四','登录','登录系统','管理员'),('2014-12-25 00:25:23 周四','登录','登录系统','管理员'),('2014-12-25 00:26:45 周四','登录','登录系统','管理员'),('2014-12-25 00:29:31 周四','登录','登录系统','管理员'),('2014-12-25 00:30:32 周四','登录','登录系统','管理员'),('2014-12-25 00:31:37 周四','登录','登录系统','管理员'),('2014-12-25 00:32:50 周四','登录','登录系统','管理员'),('2014-12-25 00:33:20 周四','登录','登录系统','管理员'),('2014-12-25 00:34:12 周四','登录','登录系统','管理员'),('2014-12-25 00:35:18 周四','登录','登录系统','管理员'),('2014-12-25 00:36:47 周四','登录','登录系统','管理员'),('2014-12-25 00:37:56 周四','登录','登录系统','管理员'),('2014-12-25 00:42:44 周四','登录','登录系统','管理员'),('2014-12-25 00:44:56 周四','登录','登录系统','管理员'),('2014-12-25 00:50:45 周四','登录','登录系统','管理员'),('2014-12-25 01:06:39 周四','登录','登录系统','管理员'),('2014-12-25 01:07:32 周四','登录','登录系统','管理员'),('2014-12-25 01:09:01 周四','登录','登录系统','管理员'),('2014-12-25 01:10:18 周四','登录','登录系统','管理员'),('2014-12-25 01:12:36 周四','登录','登录系统','管理员'),('2014-12-25 01:13:06 周四','登录','登录系统','管理员'),('2014-12-25 09:01:03 周四','登录','登录系统','管理员'),('2014-12-25 09:07:14 周四','登录','登录系统','管理员'),('2014-12-25 09:14:33 周四','登录','登录系统','管理员'),('2014-12-25 09:16:01 周四','登录','登录系统','管理员'),('2014-12-25 09:17:26 周四','登录','登录系统','管理员'),('2014-12-25 09:27:05 周四','登录','登录系统','管理员'),('2014-12-25 09:38:03 周四','登录','登录系统','管理员'),('2014-12-25 09:39:40 周四','登录','登录系统','管理员'),('2014-12-25 09:41:20 周四','登录','登录系统','管理员'),('2014-12-25 09:42:33 周四','登录','登录系统','管理员'),('2014-12-25 09:47:10 周四','登录','登录系统','管理员'),('2014-12-25 09:50:55 周四','登录','登录系统','管理员'),('2014-12-25 10:14:37 周四','登录','登录系统','管理员'),('2014-12-25 10:19:42 周四','登录','登录系统','管理员'),('2014-12-25 10:21:25 周四','登录','登录系统','管理员'),('2014-12-25 10:23:14 周四','登录','登录系统','管理员'),('2014-12-25 10:25:35 周四','登录','登录系统','管理员'),('2014-12-25 10:41:57 周四','登录','登录系统','管理员'),('2014-12-25 10:48:25 周四','登录','登录系统','管理员'),('2014-12-25 10:59:04 周四','登录','登录系统','管理员'),('2014-12-25 11:00:34 周四','登录','登录系统','管理员'),('2014-12-25 11:01:05 周四','登录','登录系统','管理员'),('2014-12-25 11:02:59 周四','登录','登录系统','管理员'),('2014-12-25 11:05:20 周四','登录','登录系统','管理员'),('2014-12-25 11:07:35 周四','登录','登录系统','管理员'),('2014-12-25 11:08:54 周四','登录','登录系统','管理员'),('2014-12-25 11:10:05 周四','登录','登录系统','管理员'),('2014-12-25 11:13:08 周四','登录','登录系统','管理员'),('2014-12-25 11:14:59 周四','登录','登录系统','管理员'),('2014-12-25 11:25:41 周四','登录','登录系统','管理员'),('2014-12-25 11:26:32 周四','登录','登录系统','管理员'),('2014-12-25 11:57:36 周四','登录','登录系统','管理员'),('2014-12-25 11:58:36 周四','来客登记','新客人入住','管理员'),('2014-12-25 12:01:57 周四','登录','登录系统','管理员'),('2014-12-25 12:03:14 周四','登录','登录系统','管理员'),('2014-12-25 12:05:38 周四','登录','登录系统','管理员'),('2014-12-25 13:30:28 周四','登录','登录系统','管理员'),('2014-12-25 13:35:42 周四','登录','登录系统','管理员'),('2014-12-25 13:47:20 周四','登录','登录系统','管理员'),('2014-12-25 14:16:33 周四','登录','登录系统','管理员'),('2014-12-25 14:17:21 周四','登录','登录系统','管理员'),('2014-12-25 14:18:05 周四','登录','登录系统','管理员'),('2014-12-25 14:19:27 周四','登录','登录系统','管理员'),('2014-12-25 14:20:15 周四','登录','登录系统','管理员'),('2014-12-25 14:55:23 周四','登录','登录系统','管理员'),('2014-12-25 15:41:10 周四','登录','登录系统','管理员'),('2014-12-25 16:40:48 周四','登录','登录系统','管理员'),('2014-12-25 16:49:33 周四','登录','登录系统','管理员'),('2014-12-25 16:51:26 周四','登录','登录系统','管理员'),('2014-12-25 16:53:29 周四','登录','登录系统','管理员'),('2014-12-25 16:54:31 周四','登录','登录系统','管理员'),('2014-12-25 16:56:06 周四','登录','登录系统','管理员'),('2014-12-25 16:56:35 周四','登录','登录系统','管理员'),('2014-12-25 16:57:12 周四','登录','登录系统','管理员'),('2014-12-25 16:58:09 周四','登录','登录系统','管理员'),('2014-12-25 16:59:13 周四','登录','登录系统','管理员'),('2014-12-25 17:08:42 周四','登录','登录系统','管理员'),('2014-12-25 17:15:41 周四','登录','登录系统','管理员'),('2014-12-25 17:17:50 周四','登录','登录系统','管理员'),('2014-12-25 17:18:27 周四','登录','登录系统','管理员'),('2014-12-25 17:18:53 周四','登录','登录系统','管理员'),('2014-12-25 20:50:37 周四','登录','登录系统','管理员'),('2014-12-25 21:39:22 周四','登录','登录系统','管理员'),('2014-12-25 22:37:24 周四','登录','登录系统','管理员'),('2014-12-25 22:42:25 周四','登录','登录系统','管理员'),('2014-12-25 22:47:46 周四','登录','登录系统','管理员'),('2014-12-25 22:52:09 周四','登录','登录系统','管理员'),('2014-12-26 17:40:52 周五','登录','登录系统','管理员'),('2014-12-26 18:25:09 周五','登录','登录系统','管理员'),('2014-12-27 12:20:18 周六','登录','登录系统','管理员'),('2014-12-27 12:23:34 周六','登录','登录系统','管理员'),('2014-12-27 12:24:07 周六','登录','登录系统','管理员'),('2014-12-27 12:29:09 周六','登录','登录系统','管理员'),('2014-12-27 12:29:30 周六','修改密码','修改管理员的密码','管理员'),('2014-12-27 12:29:35 周六','修改密码','修改管理员的密码','管理员'),('2014-12-27 12:31:19 周六','登录','登录系统','管理员'),('2014-12-27 12:32:59 周六','登录','登录系统','管理员'),('2014-12-27 12:33:58 周六','登录','登录系统','管理员'),('2014-12-27 12:35:48 周六','登录','登录系统','管理员'),('2014-12-27 12:36:08 周六','修改密码','修改管理员的密码','管理员'),('2014-12-27 13:04:36 周六','登录','登录系统','管理员'),('2014-12-27 13:05:42 周六','登录','登录系统','管理员'),('2014-12-27 13:06:37 周六','登录','登录系统','管理员'),('2014-12-27 13:07:53 周六','登录','登录系统','管理员'),('2014-12-27 13:08:39 周六','登录','登录系统','管理员'),('2014-12-27 13:10:08 周六','登录','登录系统','管理员'),('2014-12-27 13:11:03 周六','登录','登录系统','管理员'),('2014-12-27 13:11:40 周六','登录','登录系统','管理员'),('2014-12-27 13:12:47 周六','登录','登录系统','管理员'),('2014-12-27 13:16:45 周六','登录','登录系统','管理员'),('2014-12-27 13:22:40 周六','登录','登录系统','管理员'),('2014-12-27 13:26:00 周六','登录系统','顾客','2014'),('2014-12-27 13:28:40 周六','登录','登录系统','管理员'),('2014-12-27 13:48:36 周六','登录','登录系统','管理员'),('2014-12-27 13:51:31 周六','登录','登录系统','管理员'),('2014-12-27 13:58:49 周六','登录','登录系统','管理员'),('2014-12-27 14:01:00 周六','登录','登录系统','管理员'),('2014-12-27 14:02:50 周六','登录','登录系统','管理员'),('2014-12-27 14:07:09 周六','登录','登录系统','管理员'),('2014-12-27 14:07:59 周六','登录','登录系统','管理员'),('2014-12-27 14:12:37 周六','登录','登录系统','管理员'),('2014-12-27 14:36:00 周六','登录系统','顾客','2014'),('2014-12-27 14:42:24 周六','登录','登录系统','管理员'),('2014-12-27 14:46:30 周六','登录','登录系统','管理员'),('2014-12-27 14:47:13 周六','登录','登录系统','管理员'),('2014-12-27 14:48:26 周六','登录','登录系统','管理员'),('2014-12-27 15:32:48 周六','登录','登录系统','管理员'),('2014-12-27 15:33:25 周六','登录','登录系统','管理员'),('2014-12-27 15:37:11 周六','登录','登录系统','管理员'),('2014-12-27 15:42:50 周六','登录','登录系统','管理员');
/*!40000 ALTER TABLE `logblog` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `outroom`
--

DROP TABLE IF EXISTS `outroom`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `outroom` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `InRoomOrder` varchar(20) DEFAULT NULL,
  `OutRoomTime` datetime DEFAULT NULL,
  `OutRoomPrice` int(11) DEFAULT NULL,
  `OutRoomRemark` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`Id`),
  KEY `InRoomOrder` (`InRoomOrder`),
  CONSTRAINT `outroom_ibfk_1` FOREIGN KEY (`InRoomOrder`) REFERENCES `inroom` (`InRoomOrder`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `outroom`
--

LOCK TABLES `outroom` WRITE;
/*!40000 ALTER TABLE `outroom` DISABLE KEYS */;
/*!40000 ALTER TABLE `outroom` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `room`
--

DROP TABLE IF EXISTS `room`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `room` (
  `RoomNo` varchar(20) NOT NULL,
  `RoomTypeId` int(11) DEFAULT NULL,
  `RoomState` varchar(50) DEFAULT NULL,
  `RoomRemark` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`RoomNo`),
  KEY `RoomTypeId` (`RoomTypeId`),
  CONSTRAINT `room_ibfk_1` FOREIGN KEY (`RoomTypeId`) REFERENCES `roomtype` (`RoomTypeId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `room`
--

LOCK TABLES `room` WRITE;
/*!40000 ALTER TABLE `room` DISABLE KEYS */;
INSERT INTO `room` VALUES ('1001',4,'空',NULL),('1002',4,'空',NULL),('1003',4,'空',NULL),('1004',4,'空',NULL),('1005',4,'空',NULL),('101',1,'满',NULL),('102',1,'空',NULL),('103',1,'空',NULL),('104',1,'空',NULL),('105',2,'空',NULL),('106',2,'空',NULL),('107',2,'空',NULL),('108',2,'空',NULL),('109',2,'空',NULL),('201',1,'空',NULL),('202',1,'空',NULL),('203',1,'空',NULL),('204',1,'空',NULL),('205',2,'空',NULL),('206',2,'空',NULL),('207',2,'空',NULL),('208',2,'空',NULL),('209',2,'空',NULL),('301',1,'空',NULL),('302',1,'空',NULL),('303',1,'空',NULL),('304',1,'空',NULL),('305',2,'空',NULL),('306',2,'维修',NULL),('307',2,'空',NULL),('308',2,'空',NULL),('309',2,'空',NULL),('401',1,'空',NULL),('402',1,'空',NULL),('403',1,'空',NULL),('404',1,'空',NULL),('405',2,'空',NULL),('406',2,'空',NULL),('407',2,'空',NULL),('408',2,'空',NULL),('409',2,'空',NULL),('501',1,'保留',NULL),('502',1,'保留',NULL),('503',1,'保留',NULL),('504',1,'空',NULL),('505',1,'空',NULL),('506',2,'空',NULL),('507',2,'空',NULL),('508',2,'空',NULL),('509',2,'空',NULL),('601',3,'保留',NULL),('602',3,'保留',NULL),('603',3,'保留',NULL),('604',3,'空',NULL),('605',3,'空',NULL),('606',3,'空',NULL),('607',3,'空',NULL),('608',3,'保留',NULL),('609',3,'保留',NULL),('701',2,'空',NULL),('702',2,'空',NULL),('703',2,'保留',NULL),('704',2,'保留',NULL),('705',2,'空',NULL),('706',2,'空',NULL),('707',2,'空',NULL),('708',2,'空',NULL),('709',2,'空',NULL),('801',3,'空',NULL),('802',3,'保留',NULL),('803',3,'保留',NULL),('804',3,'保留',NULL),('805',3,'空',NULL),('806',3,'空',NULL),('807',3,'空',NULL),('808',3,'空',NULL),('809',3,'空',NULL),('901',3,'空',NULL),('902',3,'空',NULL),('903',3,'空',NULL),('904',3,'保留',NULL),('905',3,'保留',NULL),('906',3,'空',NULL),('907',3,'空',NULL),('908',3,'空',NULL),('909',3,'空',NULL);
/*!40000 ALTER TABLE `room` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `roomtype`
--

DROP TABLE IF EXISTS `roomtype`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `roomtype` (
  `RoomTypeId` int(11) NOT NULL AUTO_INCREMENT,
  `Typename` varchar(20) DEFAULT NULL,
  `TypePrice` int(11) DEFAULT NULL,
  PRIMARY KEY (`RoomTypeId`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `roomtype`
--

LOCK TABLES `roomtype` WRITE;
/*!40000 ALTER TABLE `roomtype` DISABLE KEYS */;
INSERT INTO `roomtype` VALUES (1,'单人间',120),(2,'双人间',200),(3,'豪华套间',500),(4,'总统套房',1000);
/*!40000 ALTER TABLE `roomtype` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `staff`
--

DROP TABLE IF EXISTS `staff`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `staff` (
  `StaffNo` varchar(20) NOT NULL,
  `StaffName` varchar(30) DEFAULT NULL,
  `StaffPassword` varchar(100) DEFAULT NULL,
  `StaffSex` varchar(4) DEFAULT NULL,
  `StaffAddress` varchar(50) DEFAULT NULL,
  `StaffType` varchar(20) DEFAULT NULL,
  `StaffRemark` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`StaffNo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `staff`
--

LOCK TABLES `staff` WRITE;
/*!40000 ALTER TABLE `staff` DISABLE KEYS */;
INSERT INTO `staff` VALUES ('1001','admin','admin','男','北京市','管理员',NULL),('1002','小张','123456','男','山西省阳泉市',NULL,NULL);
/*!40000 ALTER TABLE `staff` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2014-12-27 15:42:58
