#include <stdint.h>
int main()
{
	float money = 1000000;
	int year;

	while (1) {
		money *= 1.3;
		year++;
		if (money >= 10000000)
			break;
	}
	printf("%d년, %.1f원\n", year, money);
}