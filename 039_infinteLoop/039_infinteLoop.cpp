//3의 배수이거나 음수일 때 빠져나가는 무한루프
#include <stdio.h>

int main()
{
	while (1) {
		int x;
		printf("숫자 입력:");
		scanf_s("%d", &x);
		if (x % 3 == 0 || x < 0)
			break;
		else
			printf("%d\n", x);


	}
}