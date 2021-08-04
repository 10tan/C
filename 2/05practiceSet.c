#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Q.1
    int a = 10; int b = a; // => valid
    int v = 3 ^ 3 ; // => valid
    // char dt = "21 dec 2021" // => invalid
    char dt = '2'; // => valid

    // Q.2
    float d = (3.0/8 - 2);
    printf("%f\n", d);

    // q.3 
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Divisibility Test : %d", a%97);

    // q.4
    int x= 2,y= 3,z= 3,k= 1;
    int d = 3 * x / y -z + k; // => 0 
    printf("%d", d);
    
    return 0;
}