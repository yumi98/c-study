//2017.01.11, while
//while 사용해서 100까지 3의 배수 출력
#include <stdio.h>
#pragma warning(disable: 4996) 

int main()
{
	int dx = 1;
	while (dx < 100)
	{
		printf("%d\n", dx);
		dx = dx + 2;
	}
}