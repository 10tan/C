#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int *ptr;
    // printf("The size of int in my pc is %d\n", sizeof(int));
    // printf("The size of float in my pc is %f\n", sizeof(float));
    // printf("The size of char in my pc is %c\n", sizeof(char));

    ptr = (int *) malloc(4 * sizeof(int)); 
    for(int i=0;i<6;i++){
        printf("The value for ptr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<6;i++){
        printf("The value for ptr[%d] is %d\n", i , ptr[i]);
    }

    return 0;
}