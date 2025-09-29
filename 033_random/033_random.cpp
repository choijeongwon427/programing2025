#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//srand((unsigned)time(NULL)); //진짜 랜덤
	
	int i = 0;
	
	srand((unsigned)time(NULL));

	while (i < 100) {
		printf("%d\n", rand());
		i++;
	}
}