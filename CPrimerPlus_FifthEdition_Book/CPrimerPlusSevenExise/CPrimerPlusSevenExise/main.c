#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"��ͷ.h"
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
//��ȡ�ַ� #����  ��ӡ�ַ��Ͷ�Ӧ��ASCILL��
void printfchar()
{
	printf("����һ���ַ���(#�����������):\n");
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
//��������  0����  ����ż���ĸ����Լ�ƽ��ֵ
void intger()
{
	int num = 0;
	int n_odd = 0;
	int n_even = 0;
	int oddsum = 0;
	int evensum = 0;
	printf("������һ����������0������\n");
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
		printf("û���������ݣ�\n");
	}
	else
	{
		printf("�����ĸ�����ƽ��ֵ�ֱ�Ϊ%d,%.2f\n", n_odd, (float)oddsum / n_odd);
		printf("ż���ĸ�����ƽ��ֵ�ֱ�Ϊ%d,%.2f\n", n_even, (float)evensum / n_even);
	}
	
}
//! was replaced !! replace num
void replace()
{
	char ch=0;
	int num = 0;
	printf("����һ���ַ���(#�����������):\n");
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
	printf("\n�滻��%d�Σ�\n",num);


}
