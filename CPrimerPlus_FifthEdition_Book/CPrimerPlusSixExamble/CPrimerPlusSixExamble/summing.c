#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void summing();
void main1()
{
	summing();




	system("pause");
}
//对从键盘输入的整数进行求和
void summing()
{
	long sum = 0;
	long num = 0;
	int status = 0;
	printf("请输入要求和的整数(输入q退出)：\n");
	while (status=scanf("%ld",&num))//利用scanf的返回值是来控制循环
	{
		sum += num;
	}
	printf("the sum are %ld",
		sum);
}