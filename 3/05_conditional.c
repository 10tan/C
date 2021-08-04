#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    printf("Enter num : ");
    scanf("%d", &a);
    (a >= 5) ? printf("the number is 5 or greater") : printf("the number is lesser than 5") ;
    
    return 0;
}