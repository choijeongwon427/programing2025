#include <stdio.h>

int main()
{
	int i;
	for (i = 0; i < 5; i++)
		printf("안녕!\n");

	int sum = 0;
	
	//i=1;
	//while(i<=100){
	//  sum+=i;
	//  i++;

	for (i = 1; i <= 100; i++)
		sum += i;
	printf("sum=%d\n", sum);

	//i의 세제곱
	for (i = 1; i <= 5; i++)
		printf("%d %5d\n", i, i * i * i);
}
