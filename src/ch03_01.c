#include <stdio.h>

int main(void) {
	int number;
	while(1) {
		printf("숫자 하나를 입력하시오. (0을 입력하면 끝남) : ");
		scanf("%d", &number);
		if (number == 0) break; // number의 값이 0이면 반복을 중단
	}   
	return 0;
}
