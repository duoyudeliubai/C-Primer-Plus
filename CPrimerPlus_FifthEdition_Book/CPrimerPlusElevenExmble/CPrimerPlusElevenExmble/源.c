#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//使用字符串与用户交互
void string();
//把字符串看成指针
void quotes();
//指针和字符串
void p_and_s();
//读取一个名字
void name();
void main()
{
	/*string();*/
	/*quotes();*/
	/*p_and_s();*/
	name();

	system("pause");
}

#define MSG "You must have many talents.Tell me some."
//字符串常量
#define LIM 5
#define LINELEN 81
void string()
{
	char name[LINELEN];
	char talents[LINELEN];
	const char m1[40] = "Just limit yourself to one line's worth";
	//大小已经定的char 数组
	const char m2[] = "If you can't think of anything,fake it.";
	//让编译器计算数组的大小
	const char *m3 = "\nEnough about me-what's your name\n";
	//初始化一个指针
	const char *mytal[LIM] = { "Adding numble swiftly",
		"Multiplying accurately", "Stashing data",
		"Following instructions to the letter",
		"Understanding the C language" };
	//初始化一个字符串指针的数组
	
	printf("Hi!I'm Clyde the computer.""I have many talents.\n");
	printf("Let me tell you some of them.\n");
	puts("What were they?Ah,yes,here's a partial list.");
	for (int i = 0; i < LIM; i++)
	{
		puts(mytal[i]);
	}
	printf("%s", m3);
	gets(name);
	printf("Well,%s%s\n", name, MSG);
	puts(m1);
	puts(m2);
	gets(talents);
	printf("Let's see if I've got that list\n");
	printf("%s", talents);
	printf("\nThinks for the information,%s", name);

}

void quotes()
{
	printf("%s,%p,%c\n","we","are",*"friends");
}

void p_and_s()
{
	char* mesg = "hello,world!";
	char* copy = NULL;

	copy = mesg;
	printf("mesg=%s;&mesg=%p;value=%p",mesg,&mesg,mesg);
	printf("\ncopy=%s;&copy=%p;value=%p", copy, &copy, copy);
}

void name()
{
	char name[20];
	char *ptr;
	printf("hi,what's your name?\n");
	ptr=gets(name);
	/*puts("good name");
	puts(name);*/
	printf("%s Nice name,%s\n",name,ptr);

}