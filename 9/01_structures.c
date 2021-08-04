#include<stdio.h>
#include<string.h>

struct employee{
    char name[30];
    int age;
    char gender[10];
    int code;
    int salary;
};


int main(int argc, char const *argv[]){
    int a = 32;
    float b = 312.2;
    char s[] = "THhis is a trial chracter array";

    struct employee e1;
    strcpy(e1.name, "Tanmay Kumar");
    e1.age = 15;
    strcpy(e1.gender, "Male");
    e1.code = 213123;
    e1.salary = 321312;

    printf("%s\n", e1.name);
    printf("%s\n", e1.gender);
    printf("%d\n", e1.age);
    printf("%d\n", e1.code);
    printf("%d\n", e1.salary);
    
    return 0;
}
