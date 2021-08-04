#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int *ptr;
    int n;
    printf("Enter the size of the calloc array ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int)); 
    for(int i=0;i<n;i++){
        printf("The value for ptr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("The value for ptr[%d] is %d\n", i , ptr[i]);
    }

    return 0;
}