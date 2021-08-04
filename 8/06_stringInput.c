#include<stdio.h>
int main(int argc, char const *argv[]){
    char s[400];
    printf("Enter your desciption : ");
    // scanf("%s", s);
    gets(s); // used only for scanning strings
    printf("Your desciption is \n%s", s);
    return 0;
}