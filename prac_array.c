//2017.01.16
//int �� 100��¥���� 0~99���� �ְ� ���
#include<stdio.h>
#pragma warning(disable: 4996)
main()
{
	int a[100];
	int dx;
	for (dx = 0; dx < 100; dx++) {
		a[dx] = dx;  //a[0]=0 , a[1]=1,...,   a[99]=99
		printf("%d\n", a[dx]);
	}
}

