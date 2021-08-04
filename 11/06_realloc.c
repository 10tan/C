#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int *ptr;
    ptr = (int *)calloc(4, sizeof(int));
    ptr = realloc(ptr , 2 * sizeof(int));
    return 0;
}