#ifndef __MAIN_H__
#define __MAIN_H__

#include <reg52.h>

typedef signed char int8;  //8位有符号型
typedef unsigned char INT8U;
typedef signed int  int16; //16位有符号型
typedef unsigned char uint8;  //8位无符号型
typedef unsigned char uchar;  //8位无符号型
typedef unsigned int  uint16; //16位无符号型
typedef unsigned int INT16U;
typedef unsigned int  uint; //16位无符号型
typedef unsigned long uint32; //32位无符号型

void delay_ms(unsigned int z);

// 用户信息
typedef struct UserInfo
{
    unsigned char cardCode[5]; // 卡号
    int year;
    int month;
    int day;
}UserInfo;

enum MenuPage{
    HomePage,               // 0-主菜单模式
    ShowIDPage,             // 1-显示ID
    IntrusionPage,          // 2-非法闯入
    ContactAdminPage,       // 3-联系管理员授权
    PressCardAdminPage,     // 4-请管理员刷卡
    EnterNewCardPage,       // 5-录入新卡
    EnterNewCardSuccessPage,// 6-录入新卡成功
    RechargeSuccessPage     // 7-充值成功
};

//////////////////////////////////
//端口定义
// RC522
sbit MF522_SDA  = P1 ^ 0; //SDA
sbit MF522_SCK  = P1 ^ 1; //SCK
sbit MF522_MOSI = P1 ^ 2; //MOSI
sbit MF522_MISO = P1 ^ 3; //MISO
sbit MF522_RST  = P1 ^ 4; //RST

// DS1302
sbit D_IO   = P3 ^ 6;
sbit D_SCLK = P3 ^ 7;
sbit D_RST  = P3 ^ 5;

// 步进电机控制接口定义
#define MotorData P2

// LCD12864液晶引脚
sbit LCD12864_CS = P0 ^ 3;	//片选使能脚， L：使能片选
sbit LCD12864_RST= P0 ^ 4;	//系统复位选择脚
sbit LCD12864_RS = P0 ^ 5;	//命令/数据选择脚，L:命令 H：数据
sbit LCD12864_SCL= P0 ^ 6;	//命令/数据选择脚，L:命令 H：数据
sbit LCD12864_SDA= P0 ^ 7;	//串行数据输入/输出脚

// 蜂鸣器
sbit BEEP = P3 ^ 4;

// 录入按键
sbit KEY_S3 = P3 ^ 3;

// AT24C256
sbit SCL = P1 ^ 5;  // I2C  时钟
sbit SDA = P1 ^ 6;  // I2C  数据

#define AT24C02 0xA0  // AT24C02 地址

#endif
