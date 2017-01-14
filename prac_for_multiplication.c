//2017.01.11, for
//for이용해서 구구단만들기
#include <stdio.h>
#pragma warning(disable: 4996) 
int main()
{
	int a;
	int b;
	for (a = 2; a <= 9; a = a + 1)
	{
		for (b = 1; b <= 9; b++)
		{
			printf("%d * %d= %d\n", a, b, a*b);
		}
	}
}