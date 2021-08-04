#include<stdio.h>
int main(int argc, char const *argv[]){
    char name[] = "This is a string in c.";
    for(int i=0; i<22;i++){
        printf("%c", name[i]);
    }
    return 0;
}