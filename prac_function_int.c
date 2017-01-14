//2017.01.13, function
//유형: 전달인자는 없고 변환값이 있다.
#include <stdio.h>
#pragma warning(disable: 4996) 


int get_num()
{
	return 40;
}

main()
{
	int a = 10; //변수를 만들고(변수의정의) //10을 넣엇다(초기화)
	a = 20;  //대입연산로 값을 대입햇다.
	scanf("%d",&a); //표준입력(키보드)에 의한 대입
	a = get_num();
	printf("%d\n", a);
}