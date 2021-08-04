#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Loops are used to repead similar part of a code snippet efficiencly

    // int i = 0;
    // while (i <= 5){
    //     printf("%d\t", i);
    //     i++;
    // }

    // quiz
    int i = 0;
    while(i<=20){
        if (i >= 10){ 
        printf("The value of i is %d\n", i);
        }
        i++; // i = i + 1;
    }
    
    return 0;
}