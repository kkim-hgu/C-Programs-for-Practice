// ch12_02.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* pstr; // 실제로 저장될 문자열을 위한 포인터 
	char temp[80];  // 임시 문자열
	printf("이름은? > "); 
	scanf("%s", temp);	// 임시 문자열로 입력받는다.
	pstr = (char*) malloc(sizeof(char) * strlen(temp)+1); // 문자열 길이+1 만큼의 메모리를 할당받는다.
	strcpy(pstr, temp);	// 입력받은 문자열을 복사한다.
	printf("입력한 내용 : %s\n", pstr);
	printf("문자열 길이 : %ld\n", strlen(pstr));
	free(pstr);	// 할당받은 메모리를 반납한다.
	return 0;
}

