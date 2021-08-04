#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10; // --> integer
    // int b = 12312.1231 ;  =--> not recommended
    float b = 12312.12312;
    char c = 'c';
    int d = 13;
    printf("THE VALUE of a is %d \n", a); // %d is for integer
    printf("THE VALUE of b is %f \n", b); //%f is for float
    printf("THE VALUE of c is %c \n", c); //%c is for char

    printf("a + d == %d \n", a + d);

    return 0;
}
