//n이하의 짝수의 합
#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int i = 1;

	printf("정수를 입력하시오:");
	scanf_s("%d", &n);

	while (i <= n) {
		if (i % 2 == 0) //짝수=0 홀수는1
			sum += i;
		i++;
	}

	printf("1부터 %d까지의 짝수합은 %d", i-2, sum);
}
