//2017.01.17
//int�� �迭 3��¥���� scanf�� ���� �ְ� printf�� ���
//�������� �� ã��
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