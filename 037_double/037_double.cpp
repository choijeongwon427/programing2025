#include <stdio.h>

int main()
{
	int i;
	int a;

	for (i = 0; i < 5; i++) {
		for (a = 0; a < 5; a++)
			printf("*");
		printf("\n");
		}
		
	//구구단 출력
	int n;
	
	
	printf("단 :");
	scanf_s("%d", &n);

	for (int i=0; i < 10; i++)
		printf("%d X %d= %d\n", n, i,n*i);

	
}