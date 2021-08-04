#include<stdio.h>
int main(int argc, char const *argv[]){
    FILE *ptr;
    ptr = fopen("writing.txt", "w");
    int num = 3231;
    fprintf(ptr, "The number is %d\n", num);
    fprintf(ptr, "The number + 54 is %d\n", num+54);
    fclose(ptr);

    return 0;
}