#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<iso646.h>
void coldday();
void cypher1();
void cypher2();
void electric();
void divisors();
void chcount();
void iso646();
void main()
{
	/*coldday();*/
	/*cypher1();*/
	/*cypher2();*/
	/*electric();*/
	/*divisors();*/
	/*chcount();*/
	iso646();
	system("pause");
}
//求出温度低于零度的天数的百分率
void coldday()
{
	const int zero = 0;
	int all_day = 0;
	int cold_day = 0;
	float temperature = 0;
	printf("Enter the list of daily low temperature.\n");
	printf("Use Celsius,and enter q to quit.\n");
	while (scanf("%f",&temperature))
	{
		all_day++;
		if (temperature<zero)
		{
			cold_day++;
		}
	}
	if (all_day==0)
	{
		printf("No data to entered!\n");
	}
	else
	{
		printf("%d days total:%.1f%% were below zero.", all_day, (float)(cold_day *100.0 / all_day));
	}
	
}
//改变输入 只保留空格
void cypher1()
{
	char ch;
	ch = getchar();

	while (ch!='\n')
	{
		if (ch==' ')
		{
			putchar(' ');
		}
		else
		{
			/*ch++;
			putchar(ch);*/
			putchar(++ch);//CH++   说明了字符实际上是作为整数被存储的
		}
		ch = getchar();

	}
}
//改变输入  只保留非字母字符
void cypher2()
{
	char Ch=0;
	while (Ch!='\n')
	{
		if (isalpha(Ch))
		{
			putchar(Ch + 1);
		}
		else
		{
			putchar(Ch);
		}
		Ch = getchar();
	}




}
//计算用电账目
void electric()
{
#define RATE1 0.12589  //低于360 费率
#define RATE2 0.17901//360<x<680  费率
#define RATE3 0.20971 //680<  feilv
#define BREAK1 360.0
#define BREAK2 680.0
#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))
	double kwh=0;
	double fee = 0;
	printf("Please enter the kwh used\n");
	scanf("%lf", &kwh);
	if (kwh <= BREAK1)
	{
		fee = kwh*RATE1;
	}
	else if (kwh > BREAK1&&kwh <= BREAK2)
	{
		fee = BASE1 + (kwh - BREAK1)*RATE2;
	}
	else
	{
		fee = BASE2 + (kwh - BREAK2)*RATE3;
	}
	printf("the charge for %.1lf kwh is $%.2lf\n",kwh,fee);
}

//寻找约数
void divisors()
{
	unsigned long num;
	unsigned long div;
	//shi fou shi sushu

	printf("Please enter an integer for analysis;Enter q to quit.\n");

	while (scanf("%lu",&num)==1)
	{
		bool isprime = true;
		for (int div = 2; (div*div)<= num; div++)
		{
			if (num%div==0)
			{
				if (div*div == num)
					printf("%lu is divisible by %d .\n", num, div);	
				else
					printf("%lu is divisible by %d and %d.\n",num,div,num/div);
				isprime = false;
				/*printf("%d\n", isprime);*/
			}	
		}
		/*printf("%d\n", isprime);*/
		if (isprime)
			printf("%lu is prime\n", num);

		
		printf("Please enter an integer for analysis;Enter q to quit.\n");
		/*scanf("%lu", &num);*///不需要这句的

	}
	printf("\01\01bye bye\01\01!\n");
}
//计算字符  除了“ ‘
void chcount()
{
	int chcount = 0;
	char ch;
	while ((ch=getchar())!='.')
	{
		if (ch!='"'&&ch!='\'')
		{
			chcount++;
		}
		
	}

	printf("There are %d non-quote characters.\n", chcount);
}
//iso646.h  测试 && || ！ and or not
void iso646()
{
	int i = not 3;
	printf("%d\n", i);//0
	int j = 7 > 8 and 6 < 9;
	printf("%d\n", j);//0
	int k = 7 > 8 or 6 < 9;
	printf("%d\n", k);//1

}

//统计字数
void wordcnt()
{





}