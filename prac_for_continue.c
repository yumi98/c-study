//2017.01.11, for 
//반복문이 1~10까지의 값으르 출력하고있다
//이때 5만 빼고 출력하시오
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