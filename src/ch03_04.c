// ch03_04.c
#include <stdio.h>
int main()
{
	int i;// 반복문을 위한 변수
	int number;// 입력된 숫자
	int count_plus=0;// 양의 정수 개수 (초기값 0)
	int count_minus=0;// 음의 정수 개수 (초기값 0)
	for (i=1; i<=10; i++){
		printf("숫자를 하나 입력하시오 > ");
		scanf("%d", &number);
		if (number > 0){
			count_plus++;
		}
		else if (number < 0){
			count_minus++;
		}
	}
	printf("입력된 숫자 중에서 양의 정수는 %d개 음의 정수는 %d개입니다.\n", count_plus, count_minus);
	return 0;
}
