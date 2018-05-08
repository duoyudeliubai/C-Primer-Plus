#include"标头.h"
void daytoweek()
{
	int weeks = 0;
	int day = 0;
	printf("请输入需要转换的天数(day!正数退出)：\n");
	scanf("%d", &day);
	while (day>0)
	{
		weeks = day / per_daytoweek;
		int rest = day%per_daytoweek;
		printf("您输入的天数最多能换算成%d周%d天\n", weeks, rest);
		printf("请输入需要转换的天数(day!正数退出)：\n");
		scanf("%d", &day);

	}
}
