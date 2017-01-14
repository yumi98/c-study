//2017.01.13, function printf
#include <stdio.h>
#pragma warning(disable: 4996) 

void dp(void)
{
	printf("두개의 정수를 입력하시면 덧셈결과가 출력됩니다 \n");
	printf("자! 그럼 두개의 정수를 입력하시오 \n");
}
main(viod)
{
	int result;
	int a, b;
	dp();
	scanf("%d %d", &a, &b);
	result = a + b;
	printf("%d\n", result);
}
