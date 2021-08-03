// ch13_01.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct st_person{
	char name[20];// 이름
	char address[80];// 주소
	int age;// 나이
};
struct st_person* add_person();
void list_person(struct st_person* list[], int size);
int main()
{
	struct st_person* plist[10];  
	for(int i=0; i<3; i++){
		printf("#%d 인적사항을 입력하시오.\n", i+1);
		plist[i] = add_person();	// 새로운 인적사항 등록
		getchar(); // 다음 인적사항 입력을 위한 빈줄 처리용 
	}
	list_person(plist, 3);	// 등록된 인적사항 출력
	return 0;
}

struct st_person* add_person()
{
	struct st_person* ptr = (struct st_person*) malloc(sizeof(struct st_person));  
	// 구조체 포인터에 실제 데이터를 넣을만한 크기의 메모리를 할당함
	printf("이름은? > ");
	fgets(ptr->name, 20, stdin);
	ptr->name[strlen(ptr->name)-1] = '\0';
	printf("주소는? > ");
	fgets(ptr->address, 80, stdin);
	ptr->address[strlen(ptr->address)-1] = '\0';
	printf("나이는? > ");
	scanf("%d", &(ptr->age));
	return ptr;// 새로 추가된 구조체의 포인터를 리턴
}

void list_person(struct st_person* list[], int size){
	printf("번호 이름[나이]   주소\n");
	for(int i=0; i<size; i++)
		printf("%d %s[%d] %s\n", i+1, list[i]->name, list[i]->age, list[i]->address);
}
