#include<stdio.h>
int main(int argc, char const *argv[]){
    
    char str[] = "Tanmay";
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}