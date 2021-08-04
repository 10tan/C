#include<stdio.h>
#include<string.h>

struct employee{
    int age;
    int code;
    int salary;
    char name[30];
};

int main(int argc, char const *argv[]){
    
    struct employee e1;
    struct employee e2;
    struct employee e3;

    e1.age = 16;
    e2.age = 16;
    e3.age = 17;

    e1.code = 10000;
    e2.code = 10000;
    e3.code = 13131;

    e1.salary = 10000011;
    e2.salary = 10000010;
    e3.salary = 10000000;

    

    strcpy(e1.name, "Tanmay Kumar");
    strcpy(e2.name, "Anoushka Singh");
    strcpy(e3.name, "Unknown");

    printf("Name : %s\n", e1.name);
    printf("Age : %d\n", e1.age);
    printf("Code : %d\n", e1.code);
    printf("Salary : %d\n\n", e1.salary);

    printf("Name : %s\n", e2.name);
    printf("Age : %d\n", e2.age);
    printf("Code : %d\n", e2.code);
    printf("Salary : %d\n\n", e2.salary);

    printf("Name : %s\n", e3.name);
    printf("Age : %d\n", e3.age);
    printf("Code : %d\n", e3.code);
    printf("Salary : %d\n\n", e3.salary);

    return 0;
}