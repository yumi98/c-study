//2017.01.13, function
//두수를 받아 두 수중 큰값을 리턴하는 함수
#include <stdio.h>
#pragma warning(disable: 4996) 

int max(int x, int y) {
	if (x>y)
		return x;
	else
		return y;
}

main() {
	int a, b;
	printf("두수를 입력하세요: ");
	scanf("%d %d", &a, &b);

	printf("큰값은 %d입니다\n", max(a, b));
}
