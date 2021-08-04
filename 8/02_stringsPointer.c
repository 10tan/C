#include<stdio.h>
int main(int argc, char const *argv[]){
    char name[] = "Tanmay";
    for (int i = 0; i < 6; i++)
    {
        printf("The address of the element of %d is %u\n", name[i], &name[i]);
    }
    
    return 0;
}