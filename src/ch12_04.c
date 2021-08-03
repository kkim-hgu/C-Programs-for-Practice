// ch12_04.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct st_person{
	char name[20];// 이름
	char address[80];// 주소
	int age;// 나이
};
struct st_person* add_person();
int main()
{
	struct st_person* p;  
	p = add_person();	// 새로운 데이터를 함수를 통해 가져옴
	printf("이름 : %s (%d세)\n", p->name, p->age);
	printf("주소 : %s\n", p->address);
	free(p);	// 메모리를 반납한다.
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
