//2017.01.17
//int형 배열 3개짜리에 scanf로 값을 넣고 printf로 출력
//가장작은 값 찾기
#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a[3];
	int min, dx;

	scanf("%d", &a[0]);
	scanf("%d", &a[1]);
	scanf("%d", &a[2]);

	min = *a;
	for (dx = 0; dx<3; dx++)
		if (min>a[dx])
			min = a[dx];

	printf("%d\n", min);
}