#include<stdio.h>
#include<windows.h>
void one_three(void);
void two(void);
int main()
{
	printf("starting now:\n");
    one_three();
	printf("done!\n");
	system("pause");
   return 1;	
} 
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
void two()
{
printf("two\n");	
}
