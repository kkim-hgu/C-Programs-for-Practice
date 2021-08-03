// ch11_04.c
#include <stdio.h>
struct st_person{// 구조체 형식 선언
	char name[20];
	char address[80];
	int age;
};
void savefile(struct st_person* p);

int main()
{
	struct st_person employee={"홍길동", "서울시 종로구", 20};  // 구조체 변수 employee 선언
	savefile(&employee);		// employee의 주소값을 넘긴다.
	printf("파일 저장 완료\n");
	return 0;
}

void savefile(struct st_person* p){
	FILE* file;
	file = fopen("data.txt", "w");
	fprintf(file, "이름 : %s (%d세)\n", p->name, p->age);
	fprintf(file, "주소 : %s\n", p->address);
	fclose(file);
}
