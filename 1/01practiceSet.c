#include<stdio.h>
int main(int argc, char const *argv[])
{
    int len,bre;
    // int len = 123,bre = 123;
    int area = len * bre ;
    printf("Length : ");
    scanf("%d", &len);

    printf("Breadth : ");
    scanf("%d", &bre);

    area = len * bre;
    printf("The area of rectangle with length as %d and breadth as %d is %d", len,bre,area);

    return 0;
}