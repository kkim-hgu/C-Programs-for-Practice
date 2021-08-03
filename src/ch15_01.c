// ch15_01.c
#include <stdio.h>
struct st_record{
	// 이 곳에 필요한 멤버 데이터를 정의한다.
};
#define MAX 100
void create_data(struct st_record* p[], int size);
void read_data(struct st_record* p[], int size);
void update_data(struct st_record* p[], int size);
void delete_data(struct st_record* p[], int size);

int main(){
	struct st_record* mydata[MAX];	// 구조체 포인터 배열로 mydata 선언
	int size=0;		// 현재 구축된 레코드의 개수 변수
	int menu;		// 메뉴 번호
	while(1){ 		// 무한 반복
		printf("[1] Create [2] Read [3] Update [4] Delete [0] Exit >> ");// 메뉴 출력
		scanf("%d",&menu);// 메뉴를 읽음
		switch(menu){
			case 1 : create_data(mydata, size);	// Create 기능 호출
					break;
			case 2 : read_data(mydata, size);	// Read 기능 호출
					break;
			case 3 : update_data(mydata, size);	// Update 기능 호출
					break;
			case 4 : delete_data(mydata, size);	// Delete 기능 호출
					break;
		}
		if (menu==0) break;
	}
	return 0;
}

void create_data(struct st_record* p[], int size){

}
