#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age ; 
    int vipPass = 0;
    printf("Enter age : ");
    scanf("%d", &age);
    vipPass = 1;

    if((age <= 70 && age >= 18) || !(vipPass == 1) ){
        printf("Drive\n");
    }else{      
        printf("Cannot Drive\n");
    }

    
    return 0;
}