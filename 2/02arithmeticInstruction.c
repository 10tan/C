#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 11;
    // int z; a*b = z => illegal

    // --> Arithmetic Operators

    printf("%d \n",a + b);
    printf("%d \n",a - b);
    printf("%d \n",a * b);
    printf("%d \n",a / b);
    printf("%d \n",a % b);

    printf("Power %d\n", pow(10,2));

    int c = 231.2321;
    printf("%d\n", c);

    return 0;
}