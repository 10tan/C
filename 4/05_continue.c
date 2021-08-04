#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    for (int i = 0; i < 11; i++)
    {
        if( i == 9){
            continue;
        }
        printf("%d X %d = %d\n", n, i, (n*i));
    }
    return 0;
}