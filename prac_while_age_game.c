//2017.01.12, while
//while 사용해서 나이 맞추기 게임
#include <stdio.h>
#pragma warning(disable: 4996) 

main()
{
	int count = 0;
	int result;
	int a = 0;
	srand(time(NULL));
	result = rand() % 100 + 1;
	while (a != result) {
		printf("나이를 입력하세요: ");
		scanf("%d", &a);
		count++;
		if (a > result)
			printf("그보단 적지요\n");

		else if (a < result)
			printf("그보단 많지요\n");

		else
			printf("맞습니다\n");
		//break;
	}
	printf("비교횟수는 %d\n", count);//while
} //main