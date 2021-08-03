#include <stdio.h>

int main(void) {
	int number;
	int count=1;
	printf("양의 정수를 하나 입력하시오. : ");
	scanf("%d", &number);
	while (number >= count) {  
		// 1부터 시작하는 count값이 number를 넘지 않는 동안 무한 반복
		printf("%d, ", count);
		count++;
	} 
	printf("\n");
	return 0;
}
