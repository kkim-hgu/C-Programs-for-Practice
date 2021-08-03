// ch10_01.c
#include <stdio.h>

int main(){
	FILE* file;
	int num[10], sum=0;
	float avg;
	file = fopen("data.txt","r");
	for(int i=0;i<10;i++){
		fscanf(file, "%d", &num[i]);
		sum += num[i];
	}
	avg = sum * 0.1;
	printf("Sum : %d, Average : %.1f\n", sum, avg);
	fclose(file);
	return 0;
}

