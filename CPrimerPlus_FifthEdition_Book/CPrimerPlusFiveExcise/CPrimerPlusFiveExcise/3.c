#include"��ͷ.h"
void daytoweek()
{
	int weeks = 0;
	int day = 0;
	printf("��������Ҫת��������(day!�����˳�)��\n");
	scanf("%d", &day);
	while (day>0)
	{
		weeks = day / per_daytoweek;
		int rest = day%per_daytoweek;
		printf("���������������ܻ����%d��%d��\n", weeks, rest);
		printf("��������Ҫת��������(day!�����˳�)��\n");
		scanf("%d", &day);

	}
}
