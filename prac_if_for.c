//2017.01.11, if, for ����ؼ� a, b �� ���� �Է� �޾Ƽ� ���� ������ ū ������ �� ���� ���ϱ�
#include <stdio.h>
#pragma warning(disable: 4996) 

main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a > b) {
		for (c = b; c <= a; c++)
		{
			printf("%d\n", c);
		}
	}
	else {
		for (c = a; c <= b; c++)
		{
			printf("%d\n", c);
		}
	}
}