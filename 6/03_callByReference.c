#include<stdio.h>
void swap(int *a, int *b);
void wrongSwap(int a, int b);

int main(int argc, char const *argv[]){
    int a,b;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    wrongSwap(a,b); //not works coz called by value
    printf("Wrong Swap : %d %d \n", a,b);

    swap(&a,&b); // sending address of a and b &a and &b is the address -- works coz called by reference
    printf("Swap : %d %d \n",a,b);
    return 0;
}   
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void wrongSwap(int a, int b){
    int c = a;
    a = b;
    b = c;
}