#include<stdio.h>
#define YEARS  5
#define MONTHS 12

//打印每月的天数
void day_mon1();
//未经初始化的数组
void no_data();
//部分初始化的数组
void some_data();
//让编译器计算元素的个数
void day_mon2();
//C99 指定初始化项目
void designate();
//超出数组的边界
void bounds();
/*针对若干年的降水量数据，计算年降水总量，
年降水平均量，以及月江水平均量*/
void rain();
//指针加法  指针p+1   指的是下个元素 大小增加所指元素的字节
void ponter_add();
//对一个数组的所有元素求和  数组/指针 作作为参数之一
#define SIZE 10
void sum_arr1();
//* ++具有相同的优先级   结合时候从方向 左《--/右
void order();