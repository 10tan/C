#include<stdio.h>
int main(int argc, char const *argv[]){

    // integers
    int a[] = {99,89,79};
    printf("The value of a[0] is %d\n", a[0]);
    printf("The value of a[1] is %d\n", a[1]);
    printf("The value of a[2] is %d\n", a[2]);

    printf("\n");
    
    // float
    float b[] = {99,89,79};
    printf("The value of b[0] is %.1f\n", b[0]);
    printf("The value of b[1] is %.1f\n", b[1]);
    printf("The value of b[2] is %.1f\n", b[2]);
    return 0;
}