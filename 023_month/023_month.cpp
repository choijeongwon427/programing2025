#include <stdio.h>

int main()
{
	int month, days;

	printf("달을 입력하시오:");
	scanf_s("%d", &month);

	switch (month) {
	case '1':
	case '3':
	case '5':
	case '7':
	case '8':
	case '10':
	case '12':
		days = 31;
		break;
	case '2':
		days = 28;
		break;
	default:
		days = 30;
		break;
	}
	printf("%d월 : %d일 \n", month, days);
}