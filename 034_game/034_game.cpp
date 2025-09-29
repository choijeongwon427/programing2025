#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int cnt = 0;
	int a = rand() % 100;
	int guess;
	
	do {
		printf("정답을 추측하시오:");
		scanf_s("%d", &guess);

		if (a == guess)
			printf("정답!\n");
		else if (a < guess)
			printf("너무 높아요!\n");
		else
			printf("너무 낮아요!\n");
		cnt++;
	} while (a != guess);


	printf("%d번 시도 만에 맞추었습니다.",cnt);


	
}