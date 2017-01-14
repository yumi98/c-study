//2017.01.13, function
//유형: 전달인자는 있고 변환값이 없다
#include <stdio.h>
#pragma warning(disable: 4996) 


void a(int rev)
{
	printf("%d\n", rev);
}

main()
{
	printf("%d\n", 300);
	a(300);
}
