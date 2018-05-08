#include"excise.h"
void main()

{
	 /*testdriver1();*/
	 /*testdriver2();*/
	 /*testdriver3();*/
	/*testdriver4();*/
	//testdriver5();
	/*testdriver6();*/
	/*testdriver7();*/
	/*testdriver8();*/
	/*testdriver9();*/
	testdriver10();
	system("pause");
}
//return min num between double a and b;//
double minnum(double num1, double num2)
{
	return num1 > num2 ? num2 : num1;
}
void testdriver1()
{
	
	double num1 = 0, num2 = 0;
	while ((scanf("%lf %lf",&num1,&num2))==2)//scanf()输入double时候  需要注意%lf  不是%f
	{
		printf("%f and %f the min num is %f\n", num1, num2, minnum(num1, num2));
	}
}

//指定的ch 从i到j列输出
void chline(int i, int j, char ch)
{
	for (int k = 1; k < i; k++)
	{
		putchar(' ');
	}
	for (; i < j+1; i++)
	{
		putchar(ch);
	}
}

void chline1(char ch, int i, int j)
{
	for (int k = 1; k < i; k++)
	{
		putchar(' ');
	}
	for (; i < j + 1; i++)
	{
		putchar(ch);
	}
}
void testdriver2()
{
	char ch = 0;
	int num1 = 0, num2 = 0;
	while ((scanf("%c %d %d", &ch,&num1, &num2)) == 3)//scanf("%d %d %c ", &num1, &num2，&ch)) == 3)
	{
		chline1(ch,num1, num2);/*chline(int i, int j, char ch)；*/
		putchar('\n');
		while (getchar() != '\n')//换行符问题
		{
			continue;
		}
	}




}

void printfchar(char ch, int numch, int row)
{
	for (int j = 0; j < row; j++)
	{
		for (int i = 0; i < numch; i++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
void testdriver3()
{
	char ch = 0;
	int num1 = 0, num2 = 0;
	while ((scanf("%c %d %d", &ch, &num1, &num2)) == 3)//scanf("%d %d %c ", &num1, &num2，&ch)) == 3)
	{
		printfchar( ch, num1, num2);/*chline(int i, int j, char ch)；*/
		/*putchar('\n');*/
		while (getchar() != '\n')//换行符问题
		{
			continue;
		}
	}
} 

void xieshu(double num1, double num2)
{
	double xieshu = 0;
	xieshu = (1.0 / num1 + 1.0 / num2) / 2;
	xieshu = 1.0 / xieshu;
	printf("%f\n", xieshu);
}
void testdriver4()
{
	
	double num1 = 0, num2 = 0;
	while ((scanf("%lf %lf", &num1, &num2)) == 2)
	{
		xieshu( num1,num2);
		/*putchar('\n');*/
		//while (getchar() != '\n')//换行符问题
		//{
		//	continue;
		//}
	}
}

void larger_of(double *pmax, double *pmin)
{
	double temp=0;
	temp = *pmax;
	if (temp<*pmin)
	{
		*pmax = *pmin;
		*pmin = temp;
	}	
}
void testdriver5()
{
	double max = 0, min = 0;
	while ((scanf("%lf %lf", &max, &min)) == 2)
	{
		printf("begin max is %f,min is %f\n", max, min);
		larger_of(&max, &min);
		printf("now max is %f,min is %f\n", max, min);

	}

}
//return position character
int positionchar(char ch)
{
	if (isalpha(ch))
	{
		if (islower(ch))
		{
			return ch - 'a';
		}
		else
		{
			return ch - 'A';
		}
	}
	else
	{
		return -1;
	}
}
void testdriver6()
{
	
	char ch=0;
	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
		{
			printf("%d", positionchar(ch));
		}
	}

}
//n 个num乘积  
double power(double num, int n)
{
	double ans = 1;
	if (num==0)
	{
		return 0;
	}
	else if (n==0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			ans *= num;
		}
		return ans;
	}


}
void testdriver7()
{
	double num=0;
	int n = 0;
	while ((scanf("%lf %d",&num,&n))==2)
	{
		printf("%f 的%d次幂=%f\n", num, n, power(num, n));	
	}



}

double repower(double num, int n)
{
	double ans =1;
	if (num==0)
	{
		return 0;
	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{ 
		if (n==1)
	{
		return num;
	}
			ans=num*repower(num, n - 1);
		return ans;
	}

}
void testdriver8()
{
	double num = 0;
	int n = 0;
	while ((scanf("%lf %d", &num, &n)) == 2)
	{
		printf("%f 的%d次幂=%f\n", num, n, repower(num, n));
	}



}

void to_base_n(int num, int n)
{
	int r=0;
	r = num%n;
	if (num>=n)
	{
		to_base_n(num / n, n);	
	}
	if (r>9)
	{
		putchar('A' + r - 10);
	}
	else
	{
		putchar('0' + r);
	}
	
	
	return;
}
void testdriver9()
{
	int num = 0, n = 0;
	while ((scanf("%d %d", &num, &n)) == 2)
	{
		to_base_n(num, n);
		printf("\n");
	}
}

int Fibonacci(int n)
{
	int fibonacci1 = 1;
	int fibonacci2 = 1;
	int sum = 2;
	if (n==1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				fibonacci2 = fibonacci1 + fibonacci2;
				sum += fibonacci2;
			}
			else
			{
				fibonacci1 = fibonacci1 + fibonacci2;
				sum += fibonacci1;
			}



		}
		return sum;
	}
}
void testdriver10()
{
	int n=0;
	int sum = 0;
	while ((scanf("%d",&n))==1)
	{
		sum = Fibonacci(n);
		printf("前%d的费波拉契和是%d\n",n,sum);
	}

}