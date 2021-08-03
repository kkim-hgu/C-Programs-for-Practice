// ch10_04.c
#include <stdio.h>
#include <string.h>
int main(){
	FILE* file;
	int age;
	char name[20], city[20];
	printf("이름, 나이, 살고있는 도시는? > ");
	scanf("%s %d %s", name, &age, city);
	file = fopen("data.txt","w");
	fprintf(file, "이름 : %s\n", name);
	fprintf(file, "나이 : %d\n", age);
	fprintf(file, "지역 : %s\n", city);
	fclose(file);
	printf("파일에 저장했습니다.\n");
	return 0;
}
