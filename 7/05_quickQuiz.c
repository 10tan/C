#include<stdio.h>
int main(int argc, char const *argv[]){
    int a = 23, c = 33;
    int *b = &a, *d = &c;

    printf("B++ is %u\n", b++);   
    printf("b-- is %u\n", b--);   
    printf("*b - *d is %u\n", b-d);   
    printf("b > d is %u\n", b > d);   
    return 0;
}