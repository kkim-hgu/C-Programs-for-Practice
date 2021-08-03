#include <stdio.h>
#include <math.h>

int main()
{
	float number[10];
	int max_index;
	int i;
	for (i=0; i<10; i++){
		printf("%d번째 숫자를 입력하시오 > ", i+1);
		scanf("%f", &number[i]);
	}
	max_index=0;// 우선 첫번째 숫자를 가장 큰 수로 정한다.
	for (i=1; i<10; i++){
	// 두 번째 숫자부터 열 번째 숫자까지 반복
		if ( fabs(number[i]) > fabs(number[max_index]) )
			max_index = i;
	}
	printf("10개의 숫자 중에서 절대값이 가장 큰 수는 %.1f입니다.\n", number[max_index]);
	return 0;
}
