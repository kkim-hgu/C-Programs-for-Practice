// ch10_02.c
#include <stdio.h>

int main(){
	FILE* file;
	int num[20], sum=0;
	float avg;
	file = fopen("data.txt","r");
	int i=0;
	while(1){
		int temp = fscanf(file, "%d", &num[i]);
		if(temp<=0) break;
		sum += num[i];
		i++;
	}
	avg = sum * 0.1;
	printf("Sum : %d, Average : %.1f\n", sum, avg);
	fclose(file);
	return 0;
}
