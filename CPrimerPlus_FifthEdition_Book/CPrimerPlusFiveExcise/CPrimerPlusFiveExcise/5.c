#include"标头.h"

void daymoney()
{
	int day = 0;
	int moneysum = 0;
	printf("请输入总共工作的日期：");
	scanf("%d", &day);
	int i = 0;
	while (i++ < day)
	{
		moneysum += i;
		printf("第%3d天  获得工资%3d$  总工资%3d$ \n",i,i,moneysum);


	}
}