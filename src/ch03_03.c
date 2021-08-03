#include <stdio.h>

int main(void) {
	int i;
	int sum=0;
	for (i=1; i<=100; i++){
		sum = sum + i;
	}
	printf("1부터 100까지의 수를 모두 더한 값은 %d입니다.\n", sum);
	return 0;
}
