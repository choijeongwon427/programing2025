#include <stdio.h>

int main()
{
	int x;
	printf("정수를 입력하시오:");
	scanf_s("%d", &x);

	if ( x%2==0 )
		printf("짝수입니다.");
	else
		printf("홀수입니다."); 
}