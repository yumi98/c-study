//2017.01.18
#include<stdio.h>
#pragma warning(disable: 4996)
void get_num(int *p)
{
	int dx;
	for (dx = 0; dx < 5; dx++)
		scanf("%d", p + dx);
}
void put_num(int *p)
{
	int dx;
	for (dx = 0; dx < 5; dx++)
		printf("%d\n", *(p + dx));
}
void all_sum(int *p)
{
	int dx, sum = 0;
	for (dx = 0; dx < 5; dx++) {
		sum += p[dx];
	}
	printf("%d\n", sum);
}
void max_num(int *p)
{
	int dx, max = 0;
	max = *p;
	for (dx = 0; dx < 5; dx++)
		if (max < p[dx]) {
		max = p[dx];
	}
	printf("%d\n", max);
}
main()
{
	int a[5];
	get_num(a);  //5개 입력  
	put_num(a);  //5개 출력  
	all_sum(a);  //5개 총합  
	max_num(a);  //5개중 큰값  
}
