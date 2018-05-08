#include<stdio.h>


int main()
{
	int a=1;
	int b=2;
	 a++;//2
	 ++b;//3
	 printf("\n%p,%p",&a,&b);
	 
	printf("\na=%d,b=%d",a,b);//a 2  b  3
	 printf("\n%p,%p",&a,&b);
	
	 
	
	printf("\na=%d,a++=%d",a,a++); //a 2 2
	 printf("\n%p,%p",&a,&b);
	
	
	
	printf("\nb=%d,++b=%d",b,++b);//b=3 4
	 
	
	
	
	
	
	
	
	return 1;
	
} 
