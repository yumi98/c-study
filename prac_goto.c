//2017.01.12 , goto
//goto���� ����Ͽ� 1~10������
//�� 55�� ����Ͻÿ�
#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i, num, sum = 0;
	printf("�ڿ��� �Է�");
	scanf("%d", &num);
	if (num >= 1 && num <= 10)
		goto AAA;
AAA:
	for (i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	printf("%d", sum);
	goto END;
END:
	return 0;
}