#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 int x = 9;
 int units = 0;
 void critic();
void trystat();
void main()
{
	extern int units;
	printf("how many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	printf("while之前units=%d", units);
	while (units!=56)
		critic();
	printf("you must have looked it up!\n");
	printf("while之后units=%d", units);
	/*int x = 8;
	printf("x=%d", x);
	for (int i = 1; i <= 3; i++)
	{
		printf("\nHere comes iteration %d: \n", i);
		trystat();
	}*/
	system("pause");
}
void critic()
{
	printf("no luck,chumy.try again.\n");
	scanf("%d", &units);

}
//具有代码块作用域的静态变量
void trystat()
{
	auto int fade = 1;
	static int stay = 1;
	printf("fade=%d  stay=%d", fade++, stay++);
}