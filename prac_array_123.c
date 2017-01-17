//2017.01.16
//int형 100개짜리에 123이 반복되게 출력
#include<stdio.h>
#pragma warning(disable: 4996)
main()
{
	int a[100] = { 0,0 };
	int i;

	for (i = 1; i <= 99; i++) {
		a[i] = i;

		if (a[i] % 3 == 0) {
			printf("%d", 3);
		}
		if (a[i] % 3 == 1) {
			printf("%d", 1);
		}
		if (a[i] % 3 == 2) {
			printf("%d", 2);
		}
	}
	return 0;
}
