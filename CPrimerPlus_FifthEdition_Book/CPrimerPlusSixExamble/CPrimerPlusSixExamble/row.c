#include<stdio.h>
#define row 6

int main()
{
	//内外循环不依赖
	{for (int i = 0; i < row; i++)
	{
		{
			for (char ch = 'A'; ch < ('A' + row);)
				printf("%c", ch++); }
		printf("\n");
	}

	}
	//内外循环依赖的情况


	printf("\n\n\n");
{for (int i = 0; i < row; i++)
{
	{
		for (char ch =( 'A'+i); ch < ('A' + row);ch++)
			printf("%c", ch); }
	printf("\n");
}

}
	getchar();

}