//2017.01.12 , switch
#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a;
	printf("������ �Է��Ͻÿ�");
	scanf("%d", &a);
	switch (a / 10) {
	case 10:
	case 9:
		printf("A����\n");
		break;
	case 8:
		printf("B����\n");
		break;
	case 7:
		printf("C����\n");
		break;
	default:
		printf("F����\n");
	}
}