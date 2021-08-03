#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20], str2[20];

	printf("단어를 입력하시오. > ");
	scanf("%s", str1);
	strcpy(str2, str1);
	printf("원래 단어는 %s입니다.\n", str1);
	printf("복사된 단어는 %s입니다.\n", str2);
	return 0;
}
