//2017.01.18 
//50출력  
#include<stdio.h>
#pragma warning(disable: 4996)
int get_num()
  {
	return 40;
  }
void scan_num(int *p)
{
	*p = 50;
}
main()
{
	int a = 20;      //대입  
	scanf("%d", &a);  //키보드입력  
	a = get_num();    //리턴값 대입  
	scan_num(&a);  //실매개변수가 주소  
	printf("%d\n", a);
}
