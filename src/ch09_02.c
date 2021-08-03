// ch09_02.c
#include <stdio.h>
int main(){
    int num1, num2, temp;
    num1 = 100; num2 = 200;
    printf("num1 : %d, num2 : %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("값 맞바꾸기 수행 결과\n");
    printf("num1 : %d, num2 : %d\n", num1, num2);
    return 0;
}
