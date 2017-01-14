//2017.01.12 , goto
//goto문을 사용하여 1~10까지의
//합 55를 출력하시오
#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i, num, sum = 0;
	printf("자연수 입력");
	scanf("%d", &num);
	if (num >= 1 && num <= 10)
		goto AAA;
AAA:
	for (i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	printf("%d", sum);
	goto END;
END:
	return 0;
}