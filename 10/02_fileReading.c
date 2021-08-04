#include<stdio.h>
int main(int argc, char const *argv[]){
    FILE *ptr;
    ptr = fopen("reading.txt", "r");
    int num;
    int num1;
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num1);
    printf("The value of num in the sample file is %d\n", num);
    printf("The value of num1 in the sample file is %d\n", num1);
    fclose(ptr);
    return 0;
}