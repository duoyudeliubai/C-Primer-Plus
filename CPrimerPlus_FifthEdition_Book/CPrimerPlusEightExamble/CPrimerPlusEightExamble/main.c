/*/created in 2017/07*/
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void echo_eof();
void file_eof();
void guess1();
void guess2();
void ScanfReturn();
void showchar1();
void display(int ch,int rows,int clos);//上个函数的需要调用的子函数  负责打印
void showchar2();
void checking();
//确认输入了一个整数
int get_int(void);
//确认上下界是否有效
bool bad_limits(int begin, int end, int low, int high);
//计算A到B的平方和
double sum_squares(int a, int b);
//
void menu();
//服务void menu 只能返回特定的字符
char get_choice(void);
//解决换行符问题
char get_char(void);
void count(void);
//返回下一个非空白字符
char get_charchange();
//
void main()
{

	/*int num = EOF;
	printf("%d", num);*/
	/*echo_eof();*/
	/*file_eof();*/
	/*guess1();*/
	/*guess2();*/
	/*ScanfReturn();*/
	/*showchar1();*/
	//showchar2();
	/*checking();*/
	menu();
	/*char ch = get_charchange();
	putchar(ch);*/
	system("pause");
}
void echo_eof()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}



}
//打开一个文件   并显示其内容   有 bug！！！！！！！！！！！！
void file_eof()
{
	int ch = 0;
	FILE *fp;
	char fname[50];
	printf("Enter the name of the file: ");
	scanf("%s", &fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{

		printf("failed to open file.bye\n");
		exit(1);
	}

	while((ch == getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);


}
//猜数
void guess1()
{
	int guess = 1;
	char respond = 0;
	printf("pick an integer from 1 to 100.I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with\nan n if it is wrong.");
	printf("\nun...is your number %d\n", guess);
	scanf("%c", &respond);//存在换行符问题
	while (respond!='y')
	{
		printf("un...is your number %d\n", ++guess);
		scanf("%c", &respond);

	}

	printf("I knew I could do it\n");
}
//解决换行符等问题的   猜数  
void guess2()
{

	int guess = 1;
	char respond = 0;
	printf("pick an integer from 1 to 100.I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with\nan n if it is wrong.");
	printf("\nun...is your number %d\n", guess);

	while ((respond=getchar()) != 'y')
	{
		
		if (respond=='n')
		{
			printf("well then...is your number %d\n", ++guess);
		}
		else
		{
			printf("sorry, I understand only y or n.\n");

		}
		while (getchar() != '\n')//解决换行符问题
		continue;    //getchar()不是‘\n’ 继续getchar();直到遇到‘\n’，continue过去即可解决换行符问题

	}

	printf("I knew I could do it\n");

}
void ScanfReturn()
{
	int a1 , a2 ,a3 , a4 , a5 ;
	a1 = a2 = a3 = a4 = a5 = 0;
    a1 = (scanf("%d %d %d", &a2, &a3, &a4));
	printf("%d\n", a1);

}
//带有一个较大I/O问题的程序
void showchar1()
{
	
	int ch = 0;//要打印的字符
	int rows, clos;//需要打印的行数和列数
	rows = clos = 0;
	printf("Enter a character and two inergers;\n");
	while ((ch = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &clos);
		display(ch,rows,clos);
		printf("Enter another character and two integers;\n");
		printf("Enter a newline to quit.\n");
	}
	printf("bye.");
}

void display(int ch, int rows, int clos)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < clos; j++)
		{
			putchar(ch);
		}
		printf("\n");
	}
}
//解决换行符问题的show函数
void showchar2()
{
	int ch = 0;//要打印的字符
	int rows, clos;//需要打印的行数和列数
	rows = clos = 0;
	printf("Enter a character and two inergers;\n");
	while ((ch = getchar()) != '\n')
	{
		/*scanf("%d %d", &rows, &clos);*///无法防止用户输入不是整数，输入仍会执行
		if (scanf("%d %d", &rows, &clos)!=2)//利用scanf()的返回值
		{
			break;
		}
		display(ch, rows, clos);
		while (getchar()!='\n')
		{
			continue;
		}
		printf("Enter another character and two integers;\n");
		printf("Enter a newline to quit.\n");
	}
	printf("bye.\n");

}


//check开始
void checking()
	{
		const int MIN = -1000;
		const int MAX = 1000;
		int start;
		int stop;
		double answer;
		printf("This program computes the sum of the squares of integers"
			"in a range.\nThe lower bound should not be less than -1000 and\n"
			"the upper bound should not be more than +1000.\n"
			"Enter the limits(enter 0 for both limits to quit)\n");
		printf("lower limit:");
		start = get_int();
		printf("upper limit:");
		stop = get_int();
		while (start != 0 && stop != 0)
		{
			if (bad_limits(start, stop, MIN, MAX))
			{
				printf("Please try again.\n");
			}
			else
			{
				answer = sum_squares(start, stop);
				printf("The sum of the squares of the integers from %d to"
					"%d is %g\n", start, stop, answer);
			}
			printf("Enter the limits(enter 0 for both limits to quit)\n");
			printf("lower limit:");
			start = get_int();
			printf("upper limit:");
			stop = get_int();
		}
		printf("Done.\n");
	}
	//确认输入一个整数
	int get_int(void)
	{
		int input;
		char ch;
		while ((scanf("%d", &input)) != 1)
		{
			while ((ch = getchar()) != '\n')
			{
				putchar(ch);
			}
			printf(" is not an integer.\n");
			printf("Please enter an integer value,such as 25,-178,or 3:");

		}

		return input;
	}
	//确认范围的上下界是否有效
bool bad_limits(int begin, int end, int low, int high)
	{
		bool not_good = false;
		if (begin > end)
		{
			printf("%d isn't smaller than %d\n", begin, end);
			not_good = true;
		}
		if (begin < low || end<low)
		{
			printf("values must be %d or greater\n", begin);
			not_good = true;
		}
		if (begin>high || end > high)
		{
			printf("values must be %d or less\n", end);
			not_good = true;
		}
		return not_good;
	}
	//计算A到B的平方和
double sum_squares(int a, int b)
	{
		double sum = 0;
		for (int i = a; i <= b; i++)
		{
			sum += (i*i);
		}

		return sum;
	}
//check结束

	//menu开始
void menu()
{
	/*printf("Enter the letter of your choice:\n");
	printf("a.advice    b.bell\n");
	printf("c.who       q.quit\n");*/
	char choice;
	while ((choice = get_choice())!='q')
	{
		switch (choice)
		{
		case 'a':printf("just use it you want!\n");
			break;
		case 'b':putchar('\a');
			break;
		case 'c':count();
			break;
		default:printf("程序错误!\n");
			break;
		}

	}

}
char get_choice(void)
{
	printf("Enter the letter of your choice:\n");
	printf("a.advice    b.bell\n");
	printf("c.who       q.quit\n"); 
	char ch = 0;
	
	ch = get_charchange();//换行符问题
	
	while ((ch<'a' || ch>'c') && ch != 'q')
	{
		printf("Please respond with a,b,c or q.:\n");
		ch = get_charchange();
	}
	return ch;
}
//解决换行符问题，读取第一个字符 其余的跳越过去
char get_char(void)
{
	char ch = 0;
	ch = getchar();
	while (getchar()!='\n')
	{
		continue;
	}
	return ch;
}
void count(void)
{
	int n = 0;
	
	printf("count how far?Enter an integer:\n ");
	n = get_int();
	for (int i = 1; i <= n; i++)
	{
		printf("%d", i);
		printf("\n");
	}
	while (getchar()!='\n')
	{
		continue;
	}

}
//menu结束
//！！！！！！！！！有bug  返回下一个非空白的字符
char get_charchange()
{
	//{char ch = 0;
	//while (ch = getchar())
	//{
	//	if (ch == 32 || ch == 9 || ch == '\n')
	//	{
	//		ch = getchar();
	//	}
	//	else
	//	{
	//		break;
	//	}
	//	/*ch2 = getchar();*/
	//}
	///*ch2 = getchar();*/
	//return ch; }
	char ch;
	while ((ch =getchar())!= ' ')
	{
		if (ch == '\n' || ch == 9)
			continue;
		else
			return ch;
		continue;
	}
	
}