//2017.01.11, for 
//�ݺ����� 1~10������ ������ ����ϰ��ִ�
//�̶� 5�� ���� ����Ͻÿ�
#include <stdio.h>
#pragma warning(disable: 4996) 
main()
{
	int a;
	for (a = 1; a <= 10; a++) {
		if (a == 5)
			continue;
		printf("%d\n", a);
	}
}