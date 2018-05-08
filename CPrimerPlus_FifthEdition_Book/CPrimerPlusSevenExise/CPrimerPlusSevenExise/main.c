#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"标头.h"
void printfchar();
void intger();
void replace();
void main()
{
	/*everycount();*/

	/*printfchar();*/
	/*intger();*/
	replace();

	system("pause");
}
//读取字符 #结束  打印字符和对应得ASCILL码
void printfchar()
{
	printf("输入一段字符串(#代表输入完毕):\n");
	char ch = 0;
	int count = 0;
	while ((ch=getchar())!='#')
	{
		if (count % 8 == 0)
			printf("\n");

		putchar(ch);
		printf(" %3d ", ch);
		count++;
	
	}
	printf("\n");
}
//输入整数  0结束  奇数偶数的个数以及平均值
void intger()
{
	int num = 0;
	int n_odd = 0;
	int n_even = 0;
	int oddsum = 0;
	int evensum = 0;
	printf("请输入一串整数，以0结束！\n");
	scanf("%d", &num);
	while (num != 0)
	{
		if (num%2==0)
		{
			 ++n_even;
			 
			 evensum +=num;
		}
		else
		{
			++n_odd;
			oddsum += num;
		}
		scanf("%d", &num);
	}
	if (n_odd==0&&n_even==0)
	{
		printf("没有输入数据！\n");
	}
	else
	{
		printf("奇数的个数和平均值分别为%d,%.2f\n", n_odd, (float)oddsum / n_odd);
		printf("偶数的个数和平均值分别为%d,%.2f\n", n_even, (float)evensum / n_even);
	}
	
}
//! was replaced !! replace num
void replace()
{
	char ch=0;
	int num = 0;
	printf("输入一段字符串(#代表输入完毕):\n");
	while ((ch=getchar())!='#')
	{
		if (ch=='!')
		{
			putchar('!');
			putchar('!');
			num++;
		}
		else
		{
			putchar(ch);
		}
	}
	printf("\n替换了%d次！\n",num);


}
