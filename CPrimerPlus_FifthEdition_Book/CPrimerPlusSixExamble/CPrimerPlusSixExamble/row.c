#include<stdio.h>
#define row 6

int main()
{
	//����ѭ��������
	{for (int i = 0; i < row; i++)
	{
		{
			for (char ch = 'A'; ch < ('A' + row);)
				printf("%c", ch++); }
		printf("\n");
	}

	}
	//����ѭ�����������


	printf("\n\n\n");
{for (int i = 0; i < row; i++)
{
	{
		for (char ch =( 'A'+i); ch < ('A' + row);ch++)
			printf("%c", ch); }
	printf("\n");
}

}
	getchar();

}