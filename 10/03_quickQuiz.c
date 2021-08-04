#include<stdio.h>
int main(int argc, char const *argv[]){
    FILE *ptr;
    ptr = fopen("tanmay.txt", "r");
    if(ptr == NULL){
        printf("the files does not exists");
    }else{
        printf("the files exists");
    }
    return 0;
}