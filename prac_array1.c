//2017.01.16
//int �� 100��¥���� 100~1 ���� �ְ� ���
#include<stdio.h>
#pragma warning(disable: 4996)
main()
{
	int a[100];
	int dx;
	int b = 100;
	for (dx = 0; dx<100; dx++) //0~99
	{
		a[dx] = b;  //a[0]=0 , a[1]=1,...,   a[99]=99
		b--;

		printf("%d\n", a[dx]);
	}

}