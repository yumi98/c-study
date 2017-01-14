//2017.01.11, for 
//단을 입력하면 해당 단에 해당하는 구구단을출력하되
//거꾸로 출력
#include <stdio.h>
#pragma warning(disable: 4996) 
main()
{
	int a;
	int b;
	scanf("%d", &a);
	for (b = 9; b >= 1; b--)
	{
		printf("%d * %d= %d\n", a, b, a*b);
	}
}