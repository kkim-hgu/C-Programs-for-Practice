// ch09_01.c
#include <stdio.h>
int main(){
	int number=100;
	int* p;
	printf("number의 값 : %d\n", number);
	printf("number가 저장된 주소 : %p\n", &number);
	p = &number;
	printf("-----------------\n");
	printf("p = &number; 수행\n");
	printf("-----------------\n");
	printf("p의 값 : %p\n", p);
	printf("p가 저장된 주소 : %p\n", &p);
	printf("p의 값에 저장된 값 : %d\n", *p);
	*p = 200;
	printf("-----------------\n");
	printf("*p = 200; 수행\n");
	printf("-----------------\n");
	printf("p의 값 : %p\n", p);
	printf("p가 저장된 주소 : %p\n", &p);
	printf("p의 값에 저장된 값 : %d\n", *p);
	printf("number의 값 : %d\n", number);
	return 0;
}
