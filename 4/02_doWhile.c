#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int i = 0;
    // do
    // {
    //     printf("The value of i is %d\n", i);
    //     i++;
    // } while (i<10);

    // quick quiz
    int n;
    int i=0;
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    
    return 0;
}