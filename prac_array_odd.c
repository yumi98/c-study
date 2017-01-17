//2017.01.16
//int형 100개짜리에 홀수의 값만들어 넣어보기
//위 배열을 출력할때 55전까지만 출력
#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a[100] = { 0,0 };
	int i;

	for (i = 1; i <= 99; i = i + 2) {
		a[i] = a[i] + i;
		if (a[i]<55) {
			printf("%d\n", a[i]);
		}
	}
	return 0;
}

