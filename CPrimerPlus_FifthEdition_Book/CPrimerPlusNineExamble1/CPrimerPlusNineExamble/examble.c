#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void lethead1();
//pritnf()********
void showstarbar();
#define WIDTH 40
#define p1 "GIGATHINK,INC."
#define p2 "101 Megabuck Plaza"
#define p3 "Megapolis,CA 94904"
void lethead2();
//打印 ch  num 代表打印的个数
void show_n_char(char ch,int num);

void lesser();
//使用递归和循环解决阶乘问题
void factor();
void binary();

void locheck();
void swap1();

void swap2();
void main()
{
	/*lethead1();*/
	/*lethead2();*/
	//lesser();
	/*factor();*/
	/*binary();*/
	/*locheck();*/
	/*swap1();*/
	swap2();





	system("pause");
}
//lethead1 begin
void lethead1()
{
	showstarbar();
	printf("GIGATHINK,INC.\n");
	printf("101 Megabuck Plaza\n");
	printf("Megapolis,CA 94904\n");
	showstarbar();
}

void showstarbar()
{
	for (int i = 0; i < WIDTH; i++)
	{
		putchar('*');
	}
	printf("\n");
}
//lethead1 end
//lethead2 begin
void lethead2()
{
	int count=0;
	show_n_char('*', WIDTH);
	printf("\n");
	count=strlen(p1);
	show_n_char(' ',(WIDTH-count)/2);
	printf("%s\n",p1);
	count = strlen(p2);
	show_n_char(' ', (WIDTH - count) / 2);
	printf("%s\n", p2);
	count = strlen(p3);
	show_n_char(' ', (WIDTH - count) / 2);
	printf("%s\n", p3);
	show_n_char('*', WIDTH);
}
void show_n_char(char ch, int num)
{
	for (int i = 0; i <num; i++)
	{
		putchar(ch);
	}
	/*printf("\n");*/
}
//lethead2 end
int imin(int num1, int num2);

void lesser()
{
	int num1,num2;
	int min = 0;
	num1 = num2 = 0;
	printf("Enter a pair of integers(q to quit)\n");
	while ((scanf("%d %d",&num1,&num2))==2)
	{ 
		min = imin(num1, num2);
		printf("The lesser of %d and %d is %d.\n", 
			num1, num1, min);
		printf("Enter a pair of integers(q to quit)\n");

	}
	printf("Bye!\n");
}
int imin(int num1, int num2)
{
	return num1 > num2 ? num2 : num1;
}


long fact(int num);
long rfact(int num);
void factor()
{
	printf("This program calculates factorials.\n"
		"Enter a value in the range 0-12(q to quit):\n");
	int num = 0;
	while ((scanf("%d",&num))==1)
	{
		if (num < 0)
		{
			printf("No negative numbers,please.\n");
		}
		else if (num > 12)
		{
			printf("Keep input under 13.\n");
		}
		else
		{
			printf("loop:%d factorial=%ld\n", num, fact(num));
			printf("recursion:%d factorial=%ld\n", num, rfact(num));
		}
		printf("Enter a value in the range 0-12(q to quit):\n");
	}

	
	printf("BYE BYE");

}
long fact(int num)
{
	long ans = 1;
	for (int i = 1; i <= num; i++)
		ans *= i;
	return ans;
}
long rfact(int num)
{
	long ans=1;
	
	if (num == 0)
		return 1;
	else
		ans = num*rfact(num - 1);

	return ans;
}

void to_binary(unsigned int num);
void binary()
{
	unsigned int num=0;
	printf("Enter an integer(q to quit):\n");
	while ((scanf("%u",&num))==1)
	{
		/*printf("Enter an integer(q to quit):\n");*/
		printf("Binary equivalent:");
		to_binary(num);
		printf("\nEnter an integer(q to quit):\n");
	}
	printf("done!\n");
}

void to_binary(unsigned int num)
{
	int r;
	if (num == 0 || num == 1)
	{
		  num ? putchar('0' + 1) : putchar('0' + 0);
		  return;
		
	}
	else
	{
		r = num % 2;
		to_binary(num/2);
	}
	putchar('0' + r);
	
}
//
void mikando(int ptr);
void locheck()
{
	int ptr = 3;
	int bah = 9;
	printf("in locheck ptr=%d,&ptr=%p\n", ptr, &ptr);
	printf("in locheck bah=%d,&bah=%p\n", bah, &bah);

	mikando(ptr);
}
void mikando(int ptr)
{
	int bah = 0;
	bah=ptr;
	ptr = 45;

	printf("in mikando ptr=%d,&ptr=%p\n", ptr, &ptr);
	printf("in mikando bah=%d,&bah=%p\n", bah, &bah);


}

//
void interchange(int x,int y);
void swap1()
{
	int x = 5, y = 10;
	printf("originally x=%dandy=%d.\n", x, y);
	interchange(x, y);
	printf("now x=%dandy=%d.\n", x, y);




}
void interchange(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	printf("interchange x = %dandy = %d.\n", x, y);


}
void interchange1(int* ptrx, int* ptry);
void swap2()
{
	int x = 5, y = 10;
	printf("originally x=%dandy=%d.\n", x, y);
	interchange1(&x, &y);
	printf("now x=%dandy=%d.\n", x, y);

}
void interchange1(int* ptrx, int* ptry)
{
	int temp;
	temp = *ptrx;
	*ptrx = *ptry;
	*ptry = temp;
	printf("interchange1 x = %dandy = %d.\n", *ptrx, *ptry);

}