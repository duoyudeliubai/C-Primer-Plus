
#include"��ͷ.h"
void main1()
{
	int hour = 0;
	int min = 0;
	printf("��������Ҫת���ķ���(min<=0�˳�)��\n");
	scanf("%d", &min);
		while (min>0)
		{
			hour = min / per_mintohour;
			int rest = min%per_mintohour;
			printf("������ķ�������ܻ����%dСʱ%d����\n", hour, rest);
			printf("��������Ҫת���ķ���(min<=0�˳�)��\n");
			scanf("%d", &min);

		}
}

