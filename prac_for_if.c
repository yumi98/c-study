//2017.01.12 , for,  if
//1~100���� 3�ǹ���� 5�ǹ���� ����Ͻÿ�
#include <stdio.h>
#pragma warning(disable: 4996)

main()
{
	int a;
	for (a = 1; a <= 100; a++) {
		if ((a % 3) == 0 && (a % 5) == 0)
			printf("%d\n", a);
	}
}