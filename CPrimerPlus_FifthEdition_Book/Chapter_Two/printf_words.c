#include<stdio.h>
#include<windows.h> 
void printf_aword(void);
void printf_word(void);
int main()
{
	
  printf_aword();
  printf_aword(); 
  printf_aword();
  printf_word();
	system("pause");
	return 1;
}

void printf_aword()
{
	
	printf("For he's jolly good fellow!\n");
}

void printf_word()
{
	printf("Which nobody deny!\n");
	
}
