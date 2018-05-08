#include<stdio.h>
#include<windows.h>
int main()
{
	signed int num1=32767;
	float num2=-3.4e-38;
	float num3=3.4e38;
	printf("int=%d,\tint+1=%d,\tint+2=%d\n",num1,num1+1,num1+2);
	printf("minus float=%f,\tfloat+1=%f,\tfloat+2=%f\n",num2,num2+1,num2+2);
	printf("float=%f,\tfloat+1=%f,\tfloat+2=%f\n",num3,num3+1,num3+2);
	
	system("pause");
} 
