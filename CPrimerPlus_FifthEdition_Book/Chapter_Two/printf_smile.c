#include<stdio.h>
#include<windows.h> 
void printf_smile(void); 
int main()
{
	int i,j;//i 控制行 j控制每行打印个数 // 
	for(i=0;i<=2;i++)
    {
     {
	  for(j=2;j>=i;j--)	 
	  printf_smile(); 
     }
      printf("\n");
    }
    system("pause");
     return 1;
}



void printf_smile()
{
	
	printf("Smile!");
} 
