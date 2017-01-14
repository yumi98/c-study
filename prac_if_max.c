//2017.01.11, if 
//세개의 수를 입력받아 큰 값을 출력하시오
#include <stdio.h>
#pragma warning(disable: 4996) 

main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c) {
			printf("%d\na가 크다\n", a);
		}
	}
	else if (b > c)
	{
		if (b > a) {
			printf("%d\nb가 크다\n", b);
		}
	}
	else {
		printf("%d\nc가 크다\n", c);
	}

}