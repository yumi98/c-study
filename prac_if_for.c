//2017.01.11, if, for 사용해서 a, b 두 수를 입력 받아서 작은 수에서 큰 수까지 의 총합 구하기
#include <stdio.h>
#pragma warning(disable: 4996) 

main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a > b) {
		for (c = b; c <= a; c++)
		{
			printf("%d\n", c);
		}
	}
	else {
		for (c = a; c <= b; c++)
		{
			printf("%d\n", c);
		}
	}
}