#include<stdio.h> 
void main()
{
	int i=0,j=0;
	scanf("%d %d",&i,&j);
	int n=i;
	int k=0;
	for(k;k<=j-i;k++)
	{printf("\n%4d %4d %4d",n,n*n,n*n*n);
	n++;
	}
	
	
}
