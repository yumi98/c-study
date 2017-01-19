//2017.01.17
//int형으로 80출력
#include <stdio.h>
#pragma warning(disable: 4996)
void func(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
main()
{
	int a = 10, b = 20;
	printf("%d %d\n", a, b);  //10 20

	func(&a, &b);

	printf("%d %d\n", a, b);  //20 10
}