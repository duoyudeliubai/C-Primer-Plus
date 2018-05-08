#include"hotel.h"

int menu(void)
{
	printf("%s\n", star);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms         2)Hotel Olympic\n");
	printf("3) Chertworthy Plaza      4)The Stockton\n");
	printf("5) quit\n");
	printf("%s\n", star);
	int choice = 0;
	int staus = 0;
	while (staus = ( scanf("%d", &choice)) != 1 || choice <1 || choice > 5)
	{
		if (staus != 1)
			scanf("%*s");
			printf("Enter an integer from 1 to 5,please.\n");
	}
	return choice;
}

int getnight(void)
{
	int night = 0;
	printf("How many nights are needed?\n");
	while (scanf("%d",&night)!=1)
	{
		printf("please,input an integer:\n");
	}
	return night;
}

void showprice(double rate, int night)
{
	double cost=0;
	/*double discount = 0;*/
	for (int i = 1; i <= night; i++, rate=rate*DISCOUNT)
	{
		cost += rate;
	}
	printf("The total cost will be $%.2f\n",cost);
}