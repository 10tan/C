#include<stdio.h>
int main(int argc, char const *argv[])
{
    float principal = 10000,rate = 10,year = 2;

    float simpleInterest = (principal * rate * year) / 100;
    printf("Simple Interest %f", simpleInterest);
    return 0;
}