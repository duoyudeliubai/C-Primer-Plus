#include"��ͷ.h"

void daydaymoney()
{
	int day = 0;
	int moneysum = 0;
	printf("�������ܹ����������ڣ�");
	scanf("%d", &day);
	int i = 0;
	while (i++ < day)
	{
		moneysum += i*i;
		printf("��%3d��  ��ù���%3d$  �ܹ���%3d$ \n", i, i*i, moneysum);


	}
}