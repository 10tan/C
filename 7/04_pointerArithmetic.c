#include<stdio.h>
int main(int argc, char const *argv[]){
    int i = 213;
    int *j = &i;

    printf("For Int \n");
    printf("The value of J is %u\n", j);
    j++; 
    printf("The value of J++ is %u\n\n", j);


    float a = 234.2;
    float *b = &a;

    printf("For Float \n");
    printf("The value of J is %u\n", b);
    b++; 
    printf("The value of B++ is %u\n\n", b);

    // Character
    char f = 'A';
    char *g = &f;
    
    printf("For Character \n");
    printf("The value of J is %u\n", g);
    g++;
    printf("The value of G++ is %u\n\n", g);
    return 0;
}