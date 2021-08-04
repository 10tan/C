#include <stdio.h>

int sum(int a, int b);

int main(int argc, char const *argv[]){
    printf("The sum is %d", sum(23, 4));
    return 0;
}

int sum(int a, int b){
    return a + b;
}