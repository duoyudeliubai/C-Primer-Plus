#include<stdio.h> 
int main()
{
	float salary;
	printf("\a Enter your desired mothly salary :");
	printf("$______\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year",salary,salary*12.0);
	printf("\rGEE!\n");
	return 11;
	getchar();
	
	
	
}
