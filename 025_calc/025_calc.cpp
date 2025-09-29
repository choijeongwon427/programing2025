#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	int x, y, result=0;

	printf("수식을 입력하시오(예:5+6):");
	scanf("%d%c%d", &x, &op, &y); 
	/*scanf_s("%d%c%d", &x, &op, 1,&y);*/ //비주얼 스튜디오용

	/*printf("%d %c %d =", x, op, y);*/

	/*if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("연산자 틀림!\n");*/

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("모르는 연산자!\n");
		break;
	}
	printf("%d %c %d = %d\n", x, op, y, result);
	return 0;
}