#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʹ���ַ������û�����
void string();
//���ַ�������ָ��
void quotes();
//ָ����ַ���
void p_and_s();
//��ȡһ������
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
//�ַ�������
#define LIM 5
#define LINELEN 81
void string()
{
	char name[LINELEN];
	char talents[LINELEN];
	const char m1[40] = "Just limit yourself to one line's worth";
	//��С�Ѿ�����char ����
	const char m2[] = "If you can't think of anything,fake it.";
	//�ñ�������������Ĵ�С
	const char *m3 = "\nEnough about me-what's your name\n";
	//��ʼ��һ��ָ��
	const char *mytal[LIM] = { "Adding numble swiftly",
		"Multiplying accurately", "Stashing data",
		"Following instructions to the letter",
		"Understanding the C language" };
	//��ʼ��һ���ַ���ָ�������
	
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