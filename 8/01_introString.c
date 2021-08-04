#include<stdio.h>
int main(int argc, char const *argv[]){
    // char name[] = {'T', 'A', 'N', 'M', 'A', 'Y', '\0'};
    char name[] = "Tanmay";

    for (int i = 0; i < 6; i++){
        printf("%c",name[i]);
    }
     
    return 0;
}