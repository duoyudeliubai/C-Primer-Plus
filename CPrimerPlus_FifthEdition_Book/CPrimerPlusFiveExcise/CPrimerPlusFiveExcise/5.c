#include"��ͷ.h"

void daymoney()
{
	int day = 0;
	int moneysum = 0;
	printf("�������ܹ����������ڣ�");
	scanf("%d", &day);
	int i = 0;
	while (i++ < day)
	{
		moneysum += i;
		printf("��%3d��  ��ù���%3d$  �ܹ���%3d$ \n",i,i,moneysum);


	}
}