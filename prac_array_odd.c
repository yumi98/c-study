//2017.01.16
//int�� 100��¥���� Ȧ���� ������� �־��
//�� �迭�� ����Ҷ� 55�������� ���
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

