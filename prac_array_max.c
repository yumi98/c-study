//2017.01.16
//배열하여 큰값출력
#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a[5];
	int i, max;
	a[0] = 3, a[1] = 4, a[2] = 5, a[3] = 1, a[4] = 2;

	max = a[0];
	for (i = 0; i < 5; i++) {
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("%d\n", max);
	return 0;
}