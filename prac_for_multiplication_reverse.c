//2017.01.11, for 
//���� �Է��ϸ� �ش� �ܿ� �ش��ϴ� ������������ϵ�
//�Ųٷ� ���
#include <stdio.h>
#pragma warning(disable: 4996) 
main()
{
	int a;
	int b;
	scanf("%d", &a);
	for (b = 9; b >= 1; b--)
	{
		printf("%d * %d= %d\n", a, b, a*b);
	}
}