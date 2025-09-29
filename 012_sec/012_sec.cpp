//나머지 연산자 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60 //1분은 60초

int main()
{
	int input, minute, second;
	
	printf("초를 입력하시오 : ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE; //몇 분
	second = input % SEC_PER_MINUTE; //몇 초

	printf("%d분 %d초입니다.\n",minute,second);

}