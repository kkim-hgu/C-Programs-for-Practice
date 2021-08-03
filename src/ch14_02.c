// ch14_02.c
#include <stdio.h>
void PrintReverse(int number[], int length);

int main()
{
	int num[10]={11,22,33,44,55,66,77,88,99,100};
	PrintReverse(num, 10);
	printf("\n");
	return 0;
}

void PrintReverse(int number[], int length)  // number[] 숫자 배열, length 출력문자수
{
printf("%d ", number[length-1]);// 가장 마지막 숫자 출력
if ( length > 1) PrintReverse(number, length-1);// 출력문자수 1개 감소 후 출력
// 암묵적 기본 조건 : length<=1 인 경우
}
