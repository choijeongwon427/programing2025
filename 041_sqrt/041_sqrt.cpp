#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	while (1) {
		printf("실수 입력(음수는 종료):");
		scanf_s("%lf", &a);
		if (a < 0)
			break;
		else
			printf("%f의 제곱근은 %f\n", a, sqrt(a));
	}
	
}