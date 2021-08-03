#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i;
	srand(time(0));// 랜덤함수를 사용하기 위해 준비
	for (i=0; i<6; i++)
		printf("%d번째 숫자는 : %d\n", i+1, rand()%45+1);// 1부터 45까지의 랜덤 수 만듬
	return 0;
}
