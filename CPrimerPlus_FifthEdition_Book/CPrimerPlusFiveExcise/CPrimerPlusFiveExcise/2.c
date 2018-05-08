#include"标头.h"
//输入5 输出5到15 \n分开
void printf_inter()
{
	int num=0;
	printf("请输入任意实数：\n");
	scanf("%d", &num);
	for (int i = num; i <=num + 10; i++)
	{
		printf("%2d\n", i);
	}


}
