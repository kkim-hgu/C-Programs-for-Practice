#include <stdio.h>
#include <math.h>

int main ()
{
	for (int i=1; i<=20; i++){
		printf("%d의 제곱근은 %.3f입니다.\n", i, sqrt( (double)i ));
	}
	return 0;
}
