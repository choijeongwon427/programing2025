﻿#include <stdio.h>

int main()
{
	int year;

	printf("연도를 입력하시오 : ");
	scanf_s("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		printf("윤년입니다.\n");
	else
		printf("평년입니다.\n");
}
