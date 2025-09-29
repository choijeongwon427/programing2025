#include <stdio.h>

int main()
{
	int n;
	
	printf("n 입력 :");
	scanf_s("%d",&n);

	switch (n)
	{
	case 0:
		printf("없음\n");
		break;
	case 1:
		printf("하나\n");
		break;
	case 2:
		printf("둘\n");
		break;
	default:
		printf("많음\n");
		break;
	}
}