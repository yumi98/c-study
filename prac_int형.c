//2017.01.17
//a,b 값 바꾸기
#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 70;
	int b = 120;
	int *pa = &a;
	int *pb = &b;
	int c = 0;
	//printf("%d %d\n",a,b);

	c = *pa;
	*pa = *pb;
	*pb = c;

	printf("%d %d", a, b);
	return 0;
}