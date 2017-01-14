//2017.01.12 , for,  if
//1~100까지 3의배수와 5의배수를 출력하시오
#include <stdio.h>
#pragma warning(disable: 4996)

main()
{
	int a;
	for (a = 1; a <= 100; a++) {
		if ((a % 3) == 0 && (a % 5) == 0)
			printf("%d\n", a);
	}
}