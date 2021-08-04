#include<stdio.h>
#include<string.h>

struct employee{
    int age;
    int code;
    int salary;
    char name[30];
};

int main(int argc, char const *argv[]){
    
    struct employee apple[2];

    apple[0].age = 16;
    apple[0].code = 16;
    apple[0].salary = 16;
    strcpy(apple[0].name, "Tanmay");

    for(int i = 0;i<5;i++){
        int age,code,salary;
        char name[30];

        fflush(stdin);
        printf("Enter the age : ");
        scanf("%d", &age);

        printf("Enter the code : ");
        scanf("%d", &code);

        printf("Enter the salary : ");
        scanf("%d", &salary);

        printf("Enter the name : ");
        gets(name);
        fflush(stdin);

        apple[i].age = age;
        apple[i].code = code;
        apple[i].salary = salary;
        strcpy(apple[i].name, name);
    }

    for(int i =0;i<2;i++){
        printf("Name : %s\n",apple[i].name);
        printf("Age : %d\n",apple[i].age);
        printf("Code : %d\n",apple[i].code);
        printf("Salary : %d\n",apple[i].salary);
    }

    return 0;
}