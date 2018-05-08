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
void display(int ch,int rows,int clos);//�ϸ���������Ҫ���õ��Ӻ���  �����ӡ
void showchar2();
void checking();
//ȷ��������һ������
int get_int(void);
//ȷ�����½��Ƿ���Ч
bool bad_limits(int begin, int end, int low, int high);
//����A��B��ƽ����
double sum_squares(int a, int b);
//
void menu();
//����void menu ֻ�ܷ����ض����ַ�
char get_choice(void);
//������з�����
char get_char(void);
void count(void);
//������һ���ǿհ��ַ�
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
//��һ���ļ�   ����ʾ������   �� bug������������������������
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
//����
void guess1()
{
	int guess = 1;
	char respond = 0;
	printf("pick an integer from 1 to 100.I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with\nan n if it is wrong.");
	printf("\nun...is your number %d\n", guess);
	scanf("%c", &respond);//���ڻ��з�����
	while (respond!='y')
	{
		printf("un...is your number %d\n", ++guess);
		scanf("%c", &respond);

	}

	printf("I knew I could do it\n");
}
//������з��������   ����  
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
		while (getchar() != '\n')//������з�����
		continue;    //getchar()���ǡ�\n�� ����getchar();ֱ��������\n����continue��ȥ���ɽ�����з�����

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
//����һ���ϴ�I/O����ĳ���
void showchar1()
{
	
	int ch = 0;//Ҫ��ӡ���ַ�
	int rows, clos;//��Ҫ��ӡ������������
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
//������з������show����
void showchar2()
{
	int ch = 0;//Ҫ��ӡ���ַ�
	int rows, clos;//��Ҫ��ӡ������������
	rows = clos = 0;
	printf("Enter a character and two inergers;\n");
	while ((ch = getchar()) != '\n')
	{
		/*scanf("%d %d", &rows, &clos);*///�޷���ֹ�û����벻�������������Ի�ִ��
		if (scanf("%d %d", &rows, &clos)!=2)//����scanf()�ķ���ֵ
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


//check��ʼ
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
	//ȷ������һ������
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
	//ȷ�Ϸ�Χ�����½��Ƿ���Ч
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
	//����A��B��ƽ����
double sum_squares(int a, int b)
	{
		double sum = 0;
		for (int i = a; i <= b; i++)
		{
			sum += (i*i);
		}

		return sum;
	}
//check����

	//menu��ʼ
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
		default:printf("�������!\n");
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
	
	ch = get_charchange();//���з�����
	
	while ((ch<'a' || ch>'c') && ch != 'q')
	{
		printf("Please respond with a,b,c or q.:\n");
		ch = get_charchange();
	}
	return ch;
}
//������з����⣬��ȡ��һ���ַ� �������Խ��ȥ
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
//menu����
//��������������������bug  ������һ���ǿհ׵��ַ�
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