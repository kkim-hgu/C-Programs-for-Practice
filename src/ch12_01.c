// ch12_01.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pnum;
	int size, maxi=0;
	printf("데이터의 갯수는? > ");
	scanf("%d", &size);
	pnum = (int*) malloc(sizeof(int)*size);
	for(int i=0;i<size;i++){
		printf("%d번째 수? > ",i+1);
		scanf("%d", &pnum[i]);
		if(pnum[maxi]<pnum[i]) maxi = i;
	}
	printf("가장 큰 수는 %d번째 수인 %d입니다.\n",maxi+1, pnum[maxi]);
	return 0;
}

