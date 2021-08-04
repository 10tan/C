#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b; 
    printf("ENTER THE VALUE of A : ");
    scanf("%d", &a);

    printf("ENTER THE VALUE of B : ");
    scanf("%d", &b);

    // & --> means address of the variable also called as ADDRESS OF of the variable

    printf("THE SUM OF %d and %d is %d", a,b,(a+b));
    return 0;
}
