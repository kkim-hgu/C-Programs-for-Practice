// ch13_02.c
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
int load_person(struct st_person* list[], char* filename);
int main()
{
	struct st_person* plist[10];  
	int count = load_person(plist, "person.txt");
	list_person(plist, count);	// 등록된 인적사항 출력
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

int load_person(struct st_person* list[], char* filename){
	FILE* file;
	file = fopen(filename, "r");
	int i=0;
	while(!feof(file)){
		char name[20], address[80];  // 정보 입력용 임시 변수
		int age;
		int t=fscanf(file,"%s %d ", name, &age); // 첫줄 읽기
		if (t<=0) break;			// 읽어온 내용이 없으면 반복 중단
		fgets(address, 80, file);	// 두번째 줄 읽기
		address[strlen(address)-1]='\0';	// 마지막 개행문자 제거
		list[i]=(struct st_person*) malloc(sizeof(struct st_person)); // 메모리 할당
		strcpy(list[i]->name, name); // 내용 복사
		strcpy(list[i]->address, address); 
		list[i]->age = age;
		i++;						// 개수 증가
	}
	fclose(file);
	printf("%d개의 인적사항을 읽었습니다.\n", i);
	return i;
}
