#include <stdio.h>
int main()
{
	int order[4];// 주문개수 (피자, 스파게티, 샐러드, 음료수)
	int price[4]={15000, 10000, 7000, 2000};// 메뉴별 가격
	int sum;// 식사금액
	int total_sum=0; // 총 매출액
	int team;// 방문한 팀의 개수
	int coupon;// 사용한 쿠폰 종류
	int i, k;

	printf("오늘 방문한 팀은 모두 몇 팀입니까? ");
	scanf("%d", &team);
	printf("1. 피자(15,000원), 2. 스파게티(10,000원), 3. 샐러드(7,000원), 4. 음료수(2,000원)\n");
	for (k=0; k<team ; k++)	{
		printf("%d번 팀의 메뉴별 주문 개수를 입력하시오. ", k+1);
		scanf("%d %d %d %d", &order[0], &order[1], &order[2], &order[3]);
		sum = 0;
		for (i=0; i<4; i++){
			sum = sum + (order[i] * price[i]);// 팀의 식사금액 계산
		}
		printf("%d번 팀이 사용한 할인쿠폰을 선택하세요. (0: 없음, 1: 5%%, 2: 10%%, 3: 20%%) ", k+1);
		scanf("%d", &coupon);
		if (coupon == 1) sum = sum * 0.95;// 5% 할인쿠폰 적용
		else if (coupon == 2) sum = sum * 0.90;// 10% 할인쿠폰 적용
		else if (coupon == 3) sum = sum * 0.80;// 20% 할인쿠폰 적용
		printf("%d번 팀의 식사 금액은 %d원입니다.\n\n", k+1, sum);
		total_sum = total_sum + sum;// 총매출액 누적 합산
	}
	printf("오늘의 총 매출은 %d원입니다.\n", total_sum);

	return 0;
}
