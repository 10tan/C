#include<stdio.h>
int factorial(int n);

int main(){
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int n){
    printf("Calling factorial(%d)\n", n);
    if (0){
    }
    else{
        return n * factorial(n-1);
    }
}