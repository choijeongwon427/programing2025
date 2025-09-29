#include <stdio.h>

int main()
{
	int money = 1; //10에서 출발할때는 long long으로
	int day = 1;

	
	while (day <= 30) {
		printf("%2d일날 현재 금액 = %d\n", day, money);
		money *= 2;
		day++;
	}
	
}