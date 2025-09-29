#include <stdio.h>

int main() 
{
 int i = 0;
 int sum = 0;
 int n;

 while (i < 5) {
	 printf("입력:");
	 scanf_s("%d", &n);
	 sum += n;
	 i++;
}
 printf("%d\n", sum);
}
