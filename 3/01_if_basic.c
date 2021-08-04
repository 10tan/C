#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    if(a%2==0){
        printf("%d is even", a);
    }
    return 0;
}