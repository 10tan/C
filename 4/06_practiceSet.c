#include<stdio.h>
int main(int argc, char const *argv[])
{
    // q1
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    // for (int i = 0; i < 11; i++)
    // {
    //     printf("%d X %d = %d\n", n, i, (n*i));
    // }

    // q2
    // int n = 10;
    // for (int i = 10; i > 0; i--){
    //     printf("%d X %d = %d\n", n, i, (n*i));
    // }

    // q3
    // a do while loop is executed
    // 1.at least once => answer
    // 2.at least twice
    // 3.at most once 

    // q5
    // int sum = 0;
    // for (int i = 0; i < 11; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("%d", sum);

    // int i = 0, sum = 0;
    // while (i < 11)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // printf("%d", sum);

    // int i = 0, sum = 0;
    // do
    // {
    //     sum = sum + i;
    //     i++;
    // } while (i < 11);
    // printf("%d", sum);

    // q7
    // int n = 8;
    // int sum = 0 ;
    // for (int i = 1; i < 11; ++i){
    //     sum = sum + (n*i);
    // }
    // printf("%d", sum);

    // q8
    // int i = 1, n=3, factorial=4;
    // for ( i; i <= n; i++){
    //     factorial *= i;
    // }
    // printf("%d", factorial);

    // q9
    // int i = 1, n = 3, factorial = 4;
    // while (i<=n)
    // {
    //     factorial *= i;
    //     i++;
    // }
    // printf("%d", factorial);
    
    // q10
    // int n, prime = 0, i = 2;
    // scanf("%d", &n);

    // for (i ; i < n; i++)
    // {
    //     if (n%i==0){
    //         // printf("Prime");
    //         prime = 1;
    //         break;
    //     } 
    // }
    // if (prime == 1){
    //     printf("Not a prime number");
    // }else{
    //     printf("Prime number");
    // }

    // q11
    int n, prime = 0, i = 2;
    scanf("%d", &n);
    while(i<n){
        if (n%i==0){
            // printf("Prime");
            prime = 1;
            break;
        }else if(n==2){
            prime = 0;
        }
        i++;        
    }
    if (prime == 1){
        printf("Not a prime number");
    }else{
        printf("Prime number");
    }
    

    return 0;
}