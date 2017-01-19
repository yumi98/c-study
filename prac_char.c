//2017.01.19
//abc abc Ãâ·Â
#include <stdio.h>
#pragma warning(disable: 4996)
void put_s(char *p)
{
	while (*p)
	{
		putchar(*p++);
	}
	putchar('\n');
}
main()
{
	char a[] = "abc";
	char *p = "abc";
	put_s(a);
	put_s(p);
}