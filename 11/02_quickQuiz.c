#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[]){
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for(int i=0;i<6;i++){
        printf("The value for ptr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }
    return 0;
}