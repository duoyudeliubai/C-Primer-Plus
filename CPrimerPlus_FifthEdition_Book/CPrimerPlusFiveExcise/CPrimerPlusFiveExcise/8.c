#include"��ͷ.h"

double Temperature(double fahrenheit)
{
	double fahr = fahrenheit;
	double celsius = 1.8*fahr + 32.0;
	double Kelvin = celsius + 273.16;
	printf("fahrenheitΪ%.2f  CelsiusΪ%.2f  KelvinΪ%.2f\n",fahr,celsius,Kelvin);



}