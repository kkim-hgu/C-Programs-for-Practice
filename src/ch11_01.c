// ch11_01.c
#include <stdio.h>
#include <string.h>
struct st_person{// 구조체 형식 선언
	char name[20];
	char address[80];
	int age;
};

int main()
{
	struct st_person employee;  // 구조체 변수 employee 선언
	printf("이름은? ");
	fgets(employee.name, 20, stdin);
	employee.name[strlen(employee.name)-1]='\0'; // 마지막 개행문자 제거
	printf("주소는? ");
	fgets(employee.address, 80, stdin);
	employee.address[strlen(employee.address)-1]='\0'; // 마지막 개행문자 제거
	printf("나이는? ");
	scanf("%d", &employee.age);
	printf("%s (%d세) : %s\n", employee.name,employee.age,employee.address);
	return 0;
}
