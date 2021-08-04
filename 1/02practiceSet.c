#include<stdio.h>
int main(int argc, char const *argv[])
{
    float rad = 20;
    float height = 10;
    float pi = 3.14;
    float area = pi * rad * rad;
    float volume = area * height;
    printf("AREA %f", area);
    printf("VOLUME %f", volume);

    return 0;
}