#include<stdio.h>
int main(int argc, char const *argv[]){
    FILE *ptr;
    ptr = fopen("character.txt", "r");
    char c = fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }

    fclose(ptr);
    return 0;
}