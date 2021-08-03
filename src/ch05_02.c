#include <stdio.h>
int main()
{
	int order[4];// 주문개수 (피자, 스파게티, 샐러드, 음료수)
	int price[4]={15000, 10000, 7000, 2000};// 메뉴별 가격
	int sum;// 식사금액
	int i;
	
	printf("1. 피자(15,000원), 2. 스파게티(10,000원), 3. 샐러드(7,000원), 4. 음료수(2,000원)\n");
	printf("메뉴별 주문 개수를 입력하시오. ");
	scanf("%d %d %d %d", &order[0], &order[1], &order[2], &order[3]);
	sum = 0;
	for (i=0; i<4; i++){
		sum = sum + (order[i] * price[i]);
	}
	printf("식사 금액은 %d원입니다.\n", sum);
	return 0;
}
