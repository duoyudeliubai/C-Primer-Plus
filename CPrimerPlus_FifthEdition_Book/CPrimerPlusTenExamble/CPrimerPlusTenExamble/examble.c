#include"examble.h"

void main()
{
	/*day_mon1();*/
	/*no_data();*/
	/*some_data();*/
	/*day_mon2();*/
	/*designate();*/
	/*bounds();*/
	/*rain();*/
	/*ponter_add();*/
	/*sum_arr1();*/
	order();

	system("pause");
}

void day_mon1()
{
	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < MONTHS; i++)
	{
		printf("Month %02d has %ddays.\n", i + 1, days[i]);
	}
}

void no_data()
{
	int data[4];
	for(int i = 0; i < 4; i++)
	{
		printf("%d  %p\n", data[i], &data[i]);
	}

}

void some_data()
{
	int data[MONTHS] = { 1, 2, 3, 78 };//���ֳ�ʼ��  δ��ʼ����Ĭ��Ϊ0
	for (int i = 0; i < MONTHS-1; i++)
	{
		printf("%02d  %p\n", data[i], &data[i]);
	}
}

void day_mon2()
{
	int data[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	for (int i= 0; i < sizeof data/sizeof data[0]; i++)//sizeof ������=����������ֽ�����С sizeof һ��Ԫ��=����Ԫ�ص��ֽڴ�С
	{
		printf("��%d������%d\n", i + 1, data[i]);
	}
}

void designate()
{
	int days[MONTHS] = { 2, 1, 3, [6] = 32, [0] = 666, [11] = 78 };
	for (int i = 0; i < MONTHS; i++)
	{
		printf("��%d������%d.\n", i + 1, days[i]);
	}

}

void bounds()//��������߽��������ı�����������ֵ
{
	int value1 = 22, value2=33;
	int arr[4];
	printf("value1=%d value2=%d\n", value1, value2);
	for (int i = -1; i <=4; i++)
	{
		arr[i] = 2 * i + 1;
	}
	for (int i = -1; i <=7 ; i++)
	{
		printf("%d %d\n",i,arr[i]);
	}
	printf("value1=%d value2=%d\n", value1, value2);
}

void rain()
{
	
	 float rain[YEARS][MONTHS] = {
			 { 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
			 { 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
			 { 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 }, 
			 { 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
			 { 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 }
	 };

	 float subtot=0;
	 printf("YEAR  RAINFALL(inches)\n");
	 for (int year = 0; year < YEARS; year++)
	 {
		 float total = 0;
		 for (int month = 0; month < MONTHS;month++)
		 {
			 total += rain[year][month];
		 }
		 subtot += total;
		 printf("%d  %f\n", 2000 + year, total);
	 }

	 printf("The yearly average is %f inches\n", subtot / YEARS);

	 for (int year = 0; year < YEARS; year++)
	 {
		 float total = 0;
		 for (int month = 0; month < MONTHS; month++)
		 {
			 total += rain[year][month];
		 }	
		 printf("��%d�����ƽ����ˮ����%f\n", 2000 + year, total / MONTHS);
	 }

	 for (int month = 0; month < MONTHS; month++)
	 {
		 float total = 0;
		 for (int year = 0; year < YEARS; year++)
		 {
			total += rain[year][month];
		 }
		 printf("%02d��ƽ����ˮ����%f\n", month + 1, total /YEARS);
	 }
}

void ponter_add()
{
	int arry[5] = {1,2,3,4,5};
	double arrf[5] = {  6,7,8,9,10 };
	int* pint = NULL;
	double* pfloat = NULL;
	pfloat = arrf;
	pint = &arry;
	//*(pint+1)  arry�ĵڶ���Ԫ��  *pint+1 arry��һ��Ԫ��+1
	printf("arry[0]=%d *pint+9=%d *(pint+1)=%d\n", arry[0], *pint + 9,*(pint+1));
	printf("%p%10p\n", arry,arrf);
	printf("%20s %10s %10s\n", "int", "arry","double");
	for (int i = 0; i < 5; i++)
	{
		printf("pointers+%d  %p  %p  %p\n", i, pint + i, arry+i,pfloat+i);
	}
	putchar('\n');
	for (int i = 0; i < 5; i++)
	{
		printf("*pointers+%d  %d  %d  %06.3f  %.3f\n", i, arry[i], *(pint + i)+100, arrf[i], *(pfloat + i)+200);
	}
}

//������Ϊ���� ����Ӻ���
long AddArr(int[], int);

//ָ����Ϊ���� ����Ӻ���
long AddPointer(int* , int*);

void sum_arr1()
{
	int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	long answer1 = 0;
	long answer2 = 0;
	answer1 = AddArr(array, SIZE);
	printf("����array�ĺ���%ld\n",answer1);
	answer2 = AddPointer(array, array+SIZE);
	printf("����array�ĺ���%ld\n", answer2);
}

long AddArr(int array[], int n)
{
	long answer = 0;
	for (int i = 0; i <n; i++)
	{
		answer += array[i];
	}
	return answer;
}

long AddPointer(int* pointer, int* end)
{
	long ans = 0;
	while (pointer<end-1)
	{
		ans += *pointer;
		pointer++;
	}
	return ans;
}

void order()
{
	int ar12[2] = { 100, 200 };
	int ar21[2] = { 300, 400 };
	int* p1 = NULL;
	int* p2 = NULL;
	int* p3 = NULL;
	p1 = ar12;
	p3=p2 = ar21;
	printf("*p1=%d *p2=%d *p3=%d", *p1, *p2, *p3);
	/*printf("*p1++=%d,*++p1=%d,")*/

}
