#include <stdio.h>
int main()
{
	int num[5];// 5개의 숫자
	int sum=0;// 합계 (초기값 0)
	int i;// 반복문을 위한 변수
	for (i=0; i<5; i++){
		// i의 값은 0, 1, 2, 3, 4 까지 반복된다.
		printf("%d번 숫자를 입력하시오. ", i+1);
		scanf("%d", &num[i]);// 배열변수 num에서 인덱스 i에 해당되는 곳에 입력
		sum = sum + num[i];// 합계 계산
	}
	printf("숫자의 합계는 %d입니다.\n", sum);
	return 0;
}
