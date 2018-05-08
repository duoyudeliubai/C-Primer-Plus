#include"БъЭЗ.h"

void CentimeterToInches()
{
	int feet=0;
	float height = 0.0;
	printf("Enter a height in centimeter(<=0 to quit):");
	scanf("%f", &height);
	while (height > 0)
	{
		feet = (int)(height / per_feettocentimter);
		printf("%.1fcm=%dfeet,%.1finches\n", height, feet, (height - feet*per_feettocentimter) / per_inchetocentimeiter);
		printf("Enter a height in centimeter(<=0 to quit):");
		scanf("%f", &height);

	}
	printf("byebye\n");


}

