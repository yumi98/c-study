//2017.01.17
//int형으로 80출력
#include <stdio.h>
#pragma warning(disable: 4996)
void last(int *k)
{
	*k = 80;
}
void middle(int *p)
{
	last(p);
}
main()
{
	int a;
	middle(&a);
	printf("%d\n", a);
}
