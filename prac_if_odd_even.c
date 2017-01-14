//2017.01.11, for 
//입력한 수가 홀수이면 홀수출력 짝수면 짝수출력
#include <stdio.h>
#pragma warning(disable: 4996) 
int main()
{
	int a=0;
	scanf("%d", &a);
	if((a % 2) == 0){
		printf("짝수입니다\n");
	}
	else{
		printf("홀수입니다\n");
	}
	return 0;
		
}