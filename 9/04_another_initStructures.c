#include<stdio.h>

struct employee{
    int age;
    int code;
    int salary;
    char name[30];
};

int main(int argc, char const *argv[]){
    
    struct employee tanmay = {16,12332,100000, "Tanmay Kumar"};
    printf("The name is : %s\n",tanmay.name);
    printf("The age is : %d\n",tanmay.age);
    printf("The code is : %d\n",tanmay.code);
    printf("The salary is : %d\n",tanmay.salary);

    return 0;
}