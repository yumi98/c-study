//2017.01.18 
//50���  
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
	int a = 20;      //����  
	scanf("%d", &a);  //Ű�����Է�  
	a = get_num();    //���ϰ� ����  
	scan_num(&a);  //�ǸŰ������� �ּ�  
	printf("%d\n", a);
}
