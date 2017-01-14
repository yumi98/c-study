//2017.01.12 , while 안에 if
#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a=0;
	int sum = 0;
	while (1) {
		printf("화폐입력: ");
		scanf("%d", &a);
		if (a == 1000 || a == 500 || a == 100) {
			sum = sum + a;
			printf("총합: %d\n", sum);
		}
		else if (a == 0) {
			printf("총합: %d\n", sum);
			break;
		}
		else{
			printf("잘못된 화폐단위 입니다\n");
		}
	}
	return 0;
}