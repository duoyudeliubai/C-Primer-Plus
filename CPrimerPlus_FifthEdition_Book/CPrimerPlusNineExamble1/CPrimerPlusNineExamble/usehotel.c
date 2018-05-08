#include"hotel.h"
void main2()
{
	int night = 0;
	int choice = 0;
	double price = 0;
	while ((choice=menu())!=QUIT)
	{
		switch (choice)
		{
		case 1:price = HOTEL1;
			break;
		case 2:price = HOTEL2;
			break;
		case 3:price = HOTEL3;
			break;
		case 4:price = HOTEL4;
		default:
			break;
		}
		night = getnight();
		showprice(price, night);
	}
	printf("Think you and goodbye!\n");
	system("pause");
}