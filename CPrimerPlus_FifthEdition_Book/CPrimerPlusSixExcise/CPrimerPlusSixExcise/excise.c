#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<Windows.h>
void excise1();
void excise2();
void excise3();
void excise4();
void excise5();
void excise6();
void excise7();
void excise81();
double excise82(double dnumq, double dnum2);
void excise9();
void excise10();
void excise11();
void wang111();
void excise12();
void excise13();
void excise14();
void excise15();
void excise16();
void main()
{
	/*excise1();*/
	/*excise2();*/
	/*excise3();*/
	/*excise4();*/
	/*excise5();*/
	/*excise6();*/
	/*excise7();*/
	/*excise81();*/
	/* excise9();*/
	 ////excise10();
	//excise11();
	/*wang111();*/
	/*excise12();*/
	/*excise13();*/
	/*excise14();*/
	/*excise15();*/
	excise16();
	system("pause");
}
void excise1()
{
//	char ch;
	char array[26] = {0};
	printf("%p\n", array);

	for (int i = 0,ch='a'; i < 26; i++,ch++)
	{
		array[i]=ch;
	}


	for (int j = 0; j < 26; j++)
	{
		printf("%c ", array[0]+j);
	}

}
#define SIZE 6
void excise2()//打印图形
{
	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	

}
void excise3()
{
	
	for (int i = 0; i <= 'F'-'A'; i++)
	{
		char ch = 'F';
		for (int j = 0; j < i+1; j++)
		{
			printf("%c",ch--);
		}
		printf("\n");
	}


}

void excise4()
{
	//printf("请输入一个大写的字母：");
	char ch = 'E';
	
	//scanf("%c", &ch);
	int length = ch - 'A';
	for (int i = 0; i <= length; i++)
	{
		//处理空格
		for (int n = 0; n < length*2-i; ++n)
			  printf(" ");
		     char Ch = 'A';
		
		
			for (int j = 0; j <= i; ++j)
			{ 
				printf("%c", Ch++);
			}
			   //a


			Ch = 'A' + i;
			for (int q = 0; q<i; ++q)
				
			{
				printf("%c", --Ch);
			}
		printf("\n");

	}
}

void excise5()
{
	//未知的错误   打印不出来
	//int num_min = 0;
	//int num_max = 0;
	//scanf("%d %d", &num_max, &num_min);
	//int num = num_min;
	//for (int k = 0; k <= num_max - num_min; k++)
	//{
	//	printf("\n%4d %4d %4d", num, num*num, num*num*num);
	//	num++;
	//}
	//for (num; num <= num_max;num++)
	//{
	//	printf("%d %d %d", num, num*num, num*num*num);
	//	
	//}
	//printf("请输入两个整数，分别代表打印的上下限：\n");
	///*int i = 0;
	//for ( i < num_max - num_min; i++)
	//	printf("%4d,%5d,%5d", num, num*num, num*num*num);*/

	printf("请输入两个整数，分别代表打印的上下限：\n");
	int i = 0, j = 0;
	scanf("%d %d", &i, &j);
	int n = i;
	printf("n, n*n, n*n*n\n" );
	for (int k=0; k <= j - i; k++)
	{
		printf("%3d %5d %7d\n", n, n*n, n*n*n);
		n++;
	}

}

void excise6()
{
#define sizearry 100
	char array[sizearry] = { 0 };
	scanf("%s", array);
	printf("%s\n", array);
	int length = strlen(array);
	for (length; length >= 0; length--)
		//printf("\n%s", array[length - 1]);
		printf("%c", array[length - 1]);


}

void excise7()
{
	double dnum1 = 0;
	double dnum2 = 0;
	printf("请输入两个浮点数（q退出）：\n");
	
	//printf("%lf", chazhi);
	double chazhi = 0.0;
	
	while (scanf("%lf %lf", &dnum1, &dnum2))
	{
		
		chazhi = (dnum1>dnum2 ? (dnum1 - dnum2) : (dnum2 - dnum1));
		printf("%lf\n", chazhi / (dnum1*dnum2));//double类型对应%lf  不是%ld
		scanf("%lf %lf", &dnum1, &dnum2);
		/*scanf("%lf ,%lf", &dnum1, &dnum2);*///注意scanf的输入格式，，%lf,%lf 对应1.2,2,1
		
	}



}
void excise81()
{
	double dnum1 = 0;
	double dnum2 = 0;
	double answer1 = 0;
	printf("请输入两个浮点数（q退出）：\n");
	while (scanf("%lf %lf", &dnum1, &dnum2))
	{

		answer1=excise82(dnum1,dnum2);
		printf("%lf\n",answer1 );
		scanf("%lf %lf", &dnum1, &dnum2);

	}
}
double excise82(double dnum1,double dnum2)
{
	double chazhi = 0.0;
	chazhi = (dnum1>dnum2 ? (dnum1 - dnum2) : (dnum2 - dnum1));
	double answer = chazhi / (dnum1*dnum2);
	return answer;

}

void excise9()
{
	int num1 = 0, num2 = 0;
	
	printf("Enter lower and upper integer limits:");
	scanf("%d %d", &num1, &num2);
	while (num1-num2)
	{
		 long int sum = 0;
		for (int i = num1; i <= num2; i++)
			sum += i*i;
		printf("The Sums of the squares from %d to %d is %ld\n", num1*num1, num2*num2, sum);

		printf("Enter the next set of  limit:");
		scanf("%d %d", &num1, &num2);
	}

	printf("Done\n");





}

void excise10()
{
#define length 8
	int arrcy[length] = {0};
	printf("请输入八个整数，将会逆序打印出来\n");
	for (int i = 0; i < 8; i++)
		scanf("%d", &arrcy[i]);
		/*scanf("%d", arrcy[i] );//必须要有&符 否则运行不了*/
	for (int j = length-1; j>= 0; j--)
		printf("\n%d", arrcy[j]);  //strlen() 

}

void excise11()
{
	int n_count=0;
	printf("请输入一个整数，代表您想求到第几次：");
	scanf("%d", &n_count);
	float plusnum = 0;
	float subnum = 0;
	for (int i = 1; i <= n_count; i++)
	{
		plusnum = plusnum + 1.0 / (float)i;
		if (i%2==0)
		{
			subnum = subnum - (1.0 / (float)i); 
		}
		else
		{
			subnum = subnum + 1.0 / (float)i;
		}
	}
	printf("%f\n", plusnum);
	printf("%f\n", subnum);
	printf("%f\n", subnum+plusnum);

}
//网友的答案
void wang111()
{
	int fh = 1, count;
	float a, b, c, i;
	a = b = 1; 
	scanf("%d", &count);
	for (i = 1.; i < count && count != 1; i++){
		c = 1.0 / (i + 1);
		a = a + c;
		fh = fh*(-1);
		b = b + (c*fh);
	}
	a = a + b;
	printf("%f\n", a); 
}

void excise12()
{
	int arrnum[8] = { 1 };
	for (int i = 0; i < 8; i++)
		if (i == 0)
			arrnum[i] = 2;
		else
		arrnum[i] = 2 * arrnum[i-1];
	int j=0;
	do
	{
		printf("%4d", arrnum[j]);
		j++;
	} while (j<8);



}
void excise13()
{

	double darray1[8] = { 0.0 };
	double darray2[8] = { 0.0 };
	for (int i = 0; i < 8; i++)
	{
		scanf("%lf", &darray1[i]);
		if (i == 0)
		{
			darray2[i] = darray1[i];
		}
		else
		{
			darray2[i] = darray2[i - 1] + darray1[i];
		}
		
	}
	int j = 0;

	do
	{
		if (j<8)
		{
			printf("%05.2lf  ", darray1[j]);
			j++;
		}
		else
		{
			if (j==8)
			printf("\n");
			printf("%05.2lf  ", darray2[j-8]);//%04.2不行 当输入1.0时 1.00有四个宽度了
			j++;
		}
		
	} while (j<16);	
}
//输入 直到遇见|  然后反打印
void excise14()
{
	char str[255] = { 0 };
	int i = 0;
	char ch;
	scanf("%c", &ch);
	while (ch != '|')
	{
		if (ch == '\n')
		{
			str[i++] = 'n';
			str[i++] = '\\';
			
		}
		else
		{
			str[i++] = ch;
		}

		scanf("%c", &ch);
	}
	for (int j = i-1; j >=0;j--)
	printf("%c",str[j]);
}
//单利息  复利息 超过问题
void excise15()
{
   
	float Daphne = 101;
	float Deirdre = 100;
	int i = 0;//记年数
	while (Daphne > Deirdre)
	{
		i++;
		Daphne =(float)(100*(1.0+(i*1/10.0)));
		Deirdre = (float)((Deirdre)*(1 + 0.05));
		
		printf("Daphne  %f,Deirdre  %f第%02d年\n", Daphne, Deirdre, i);
	}
	printf("\nDaphne  %f,Deirdre  %f第%d年\n", Daphne, Deirdre, i);


}

void excise16()
{
	float lucky = 100;//lucky 的账号有100万美金
	int year = 0;
	while (lucky > 0)
	{
		year++;
		lucky = lucky*(1 + 8 / 100.0);
		lucky -= 10;
		printf("第%02d年，账户余额$%09f\n", year, lucky);
	}

	printf("\n第%2d年能取走所有的钱！",year);

}