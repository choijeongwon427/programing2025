#include <stdio.h>

int main()
{
	int a;
	int fact = 1;
	int i;

	printf("정수를 입력하시오:");
	scanf_s("%d", &a);

	for (i = 1; i <= a; i++)
		fact *= i;

	printf("%d!=%d\n", a, fact);
	
}