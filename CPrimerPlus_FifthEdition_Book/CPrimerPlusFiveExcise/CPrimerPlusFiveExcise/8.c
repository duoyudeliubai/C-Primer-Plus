#include"标头.h"

double Temperature(double fahrenheit)
{
	double fahr = fahrenheit;
	double celsius = 1.8*fahr + 32.0;
	double Kelvin = celsius + 273.16;
	printf("fahrenheit为%.2f  Celsius为%.2f  Kelvin为%.2f\n",fahr,celsius,Kelvin);



}