#include<stdio.h>
int main(int argc, char const *argv[]){
    int a = 23;  // => integer type literal
    float c = 312.23;  // => float type literal

    int *x = &a;  // => integer type literal pointer ==> address of the literal  
    float *y = &c;  // => float type literal pointer ==> address of the literal 

    printf("%u\n", x); // ==> Printing the address of the interger literal  ==> "%u is for the pointers"
    printf("%u\n", y); // ==> Printing the address of the float literal  ==> "%u is for the pointers"

    // Printing the values from address of the variable -- Pointers
    printf("%d\n", *x);
    printf("%f\n", *y);

    // Printing the address of the pointer variable
    printf("%u\n" , &x);
    printf("%u\n" , &y);

    // Printing the value of pointer from its address 
    printf("%u\n" , *(&x));
    printf("%u\n" , *(&y));

    return 0;
}