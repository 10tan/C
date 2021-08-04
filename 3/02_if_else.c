#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age ; 
    printf("Enter age : ");
    scanf("%d", &age);
    if(age>=90){
        printf("Cannot Drive\n");
    }else{
        printf("Drive\n");
    }

    if(age==50){
        printf("Half Century");
    }
    // if(age=50){ => assigning to a non zero which means true
    //     printf("Half Century");
    // }
    
    return 0;
}