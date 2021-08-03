// ch08_01.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print_border();// 함수 원형은 이곳에 기입한다.

int main()
{
	int i, j;
	srand(time(0));
	printf("로또 번호 5개를 생성합니다.\n");
	for (i=0;i<5;i++){
		print_border();//  함수 호출
		printf("%d 번째 : ", i+1);
		for (j=0; j<6; j++)
			printf("%d ", rand()%45+1);
		printf("\n");
	}
	print_border();//  함수 호출
}
// 함수를 구현한 코드는 여기부터 기입한다.
void print_border()
{
	printf("=============================\n");
}
