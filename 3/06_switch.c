#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rating;
    printf("ENTER RATING : ");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("POOR");
        break;
    case 2:
        printf("AVERAGE");
        break;
    case 3:
        printf("GOOD");
        break;
    case 4:
        printf("AMAZING");
        break;
    case 5:
        printf("EXCELLENT");
        break;    
    default:
        printf("Wrong rating");
    }

    return 0;
}