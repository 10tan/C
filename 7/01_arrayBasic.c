#include<stdio.h>
int main(int argc, char const *argv[]){
    // int marks,marks1,marks2,marks3,marks4; // ==> too long   // => make arrays instead 


    // Short way 
    float marks[4];
    for(int i=0; i<=3; i++){
        scanf("%f", &marks[i]);
    }
    for (int i = 0; i <=3; i++)
    {
        printf("%.1f ", marks[i]);
    }

    // array index starts with 0
    
    return 0;
}