#include <stdio.h>

int main()
{
	int i = 0; //사람수
	int n;  //입력
	int sum = 0; //합계


	while (1) {
		printf("성적을 입력하시오:");
		scanf_s("%d", &n);
		
		if (n < 0) 
			break;

		sum += n;
		i++;
	}
	double avg = sum / i;
	printf("성적의 평균은 %f 입니다.", avg);
}