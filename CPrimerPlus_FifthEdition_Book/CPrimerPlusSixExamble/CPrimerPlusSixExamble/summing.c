#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void summing();
void main1()
{
	summing();




	system("pause");
}
//�ԴӼ�������������������
void summing()
{
	long sum = 0;
	long num = 0;
	int status = 0;
	printf("������Ҫ��͵�����(����q�˳�)��\n");
	while (status=scanf("%ld",&num))//����scanf�ķ���ֵ��������ѭ��
	{
		sum += num;
	}
	printf("the sum are %ld",
		sum);
}