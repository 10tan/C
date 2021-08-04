#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int *ptr;

    ptr = (int *) calloc(6, sizeof(int)); 
    for(int i=0;i<6;i++){
        printf("The value for ptr[%d] is %d\n", i , ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value for ptr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<6;i++){
        printf("The value for ptr[%d] is %d\n", i , ptr[i]);
    }

    return 0;
}