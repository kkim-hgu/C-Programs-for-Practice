// ch09_03.c
#include <stdio.h>
void exchange(int* n1, int* n2);
int main(){
    int num1, num2, temp;
    num1 = 100; num2 = 200;
    printf("num1 : %d, num2 : %d\n", num1, num2);
    exchange(&num1, &num2);
    printf("값 맞바꾸기 수행 결과\n");
    printf("num1 : %d, num2 : %d\n", num1, num2);
    return 0;
}
void exchange(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
