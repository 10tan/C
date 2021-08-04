#include<stdio.h>
int main(int argc, char const *argv[]){
    int marks[5];
    for(int i = 0; i <= 4; i++){
        printf("Enter Marks here : ");
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i <= 4; i++){
        printf("Marks %d : %d \n", i+1, marks[i]);
    }
    return 0;
}