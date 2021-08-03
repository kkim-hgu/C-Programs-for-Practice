#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20], str2[20];

	printf("첫 번째 단어를 입력하시오. > ");
	scanf("%s", str1);
	printf("두 번째 단어를 입력하시오. > ");
	scanf("%s", str2);

	if(strcmp(str1, str2)==0)
		printf("동일한 단어입니다.\n");
	else
		printf("다른 단어입니다.\n");
	return 0;
}
