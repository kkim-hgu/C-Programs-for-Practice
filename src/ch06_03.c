#include <stdio.h>
#include <string.h>
int main()
{
	char str[80];
	printf("당신의 이름을 입력하세요 > ");
	fgets(str,80,stdin);
	str[strlen(str)-1] = '\0';
	printf("입력하신 이름은 %s입니다.\n", str);
	return 0;
}
