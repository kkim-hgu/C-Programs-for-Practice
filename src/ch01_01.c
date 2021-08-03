// ch01_01.c
#include <stdio.h>
int main()
{
	int unit_price, apple_count, price;
	printf("사과 1개의 가격은 얼마입니까? ");
	scanf("%d", &unit_price); 
	printf("사과의 개수는 모두 몇 개 입니까? ");
	scanf("%d", &apple_count); 
	price = apple_count * unit_price;
	printf("전체 사과의 가격은 %d원 입니다\n", price); 
	return 0;
}
