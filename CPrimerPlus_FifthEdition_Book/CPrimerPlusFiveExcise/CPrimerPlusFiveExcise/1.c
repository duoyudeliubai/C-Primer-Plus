
#include"标头.h"
void main1()
{
	int hour = 0;
	int min = 0;
	printf("请输入需要转换的分钟(min<=0退出)：\n");
	scanf("%d", &min);
		while (min>0)
		{
			hour = min / per_mintohour;
			int rest = min%per_mintohour;
			printf("您输入的分钟最多能换算成%d小时%d分钟\n", hour, rest);
			printf("请输入需要转换的分钟(min<=0退出)：\n");
			scanf("%d", &min);

		}
}

