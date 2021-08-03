// ch11_03.c
#include <stdio.h>
#include <string.h>
struct st_person{// 구조체 형식 선언
	char name[20];
	char address[80];
	int age;
};
void get_person(struct st_person* p);

int main()
{
	struct st_person employee;  // 구조체 변수 employee 선언
	get_person(&employee);		// employee의 주소값을 넘긴다.
	printf("%s (%d세) : %s\n", employee.name,employee.age,employee.address);
	return 0;
}

void get_person(struct st_person* p){
	printf("이름은? ");
	fgets(p->name, 20, stdin);
	p->name[strlen(p->name)-1]='\0'; // 마지막 개행문자 제거
	printf("주소는? ");
	fgets(p->address, 80, stdin);
	p->address[strlen(p->address)-1]='\0'; // 마지막 개행문자 제거
	printf("나이는? ");
	scanf("%d", &(p->age));
}
