#include<stdio.h>
int sum(int a,int b);
int main(int argc, char const *argv[]){
    int a = 3,b = 4;
    printf("The value of %d + %d is : %d", a,b,sum(a,b));
    return 0;
}
int sum(int a,int b){
    return a+b;
}