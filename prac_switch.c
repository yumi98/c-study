//2017.01.12 , switch
#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a;
	printf("점수를 입력하시오");
	scanf("%d", &a);
	switch (a / 10) {
	case 10:
	case 9:
		printf("A학점\n");
		break;
	case 8:
		printf("B학점\n");
		break;
	case 7:
		printf("C학점\n");
		break;
	default:
		printf("F학점\n");
	}
}