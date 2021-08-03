// ch08_04.c
#include <stdio.h>
int get_score(char name[]);// 함수 원형은 이곳에 기입한다.

int main(){
	char names[3][20]={"국어","영어","수학"}; // 과목이름
	int jumsu[3];// 국어, 영어, 수학 점수
	int sum=0;// 총점
	float average;// 평균
	for(int i=0; i<3; i++){
		jumsu[i] = get_score(names[i]);
		sum = sum + jumsu[i];
	}
	average = sum / 3.0;
	printf("총점은 %d, 평균은 %.1f점입니다.\n", sum, average);
	return 0;
}
// 함수를 구현한 코드는 여기부터 기입한다.
int get_score(char name[]){
	int jumsu;
	while(1) {
		printf("%s 점수를 입력하시오. > ",name);
		scanf("%d", &jumsu);
		if (jumsu < 0 || jumsu > 100)
			printf("잘못 입력하였습니다. \n");
		else
			return jumsu;// 올바른 범위의 숫자이므로 리턴한다.
	}
}
