//ch14_01.c
#include <stdio.h>
int FactorialNoRecur(int n);// 함수 원형 선언

int main()
{
	int number;
	printf("계승을 구하려는 숫자를 입력하시오. ");
	scanf("%d", &number);
	printf("%d의 계승은 %d입니다.\n",number, FactorialNoRecur(number));
	return 0;
}

int FactorialNoRecur(int n)
{
	int result;
	result = 1;
	for (int i=1;i<=n;i++)
		result = result * i;// 1부터 파라미터로 넘어온 n까지를 곱한다.
	return result;
}
