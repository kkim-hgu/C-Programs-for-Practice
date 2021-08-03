// ch10_03.c
#include <stdio.h>
#include <string.h>
int main(){
	FILE* file;
	int count=0;
	char line[100];
	file = fopen("data.txt","r");
	while(!feof(file)){
		fgets(line, 100, file);
		count++;
		printf("line %d - length %d\n",count,(int)strlen(line));
	}
	fclose(file);
	return 0;
}
