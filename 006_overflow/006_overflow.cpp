﻿#include <stdio.h>
#include <limits.h>

int main()
{
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;

	s_money = s_money + 1; //오버플로우
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1; //오버플로우
	printf("u_money = %d\n", u_money);

	return 0; //생략 가능
}
