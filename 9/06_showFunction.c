#include<stdio.h>
#include<string.h>

// struct employee{
//     int code;
//     int age;
//     char name[20];
// };


typedef struct employee{
    int code;
    int age;
    char name[20];
} emp ;

void show(emp e){
    printf("The name of e is %s\n", e.name);
    printf("The code of e is %d\n", e.code);
    printf("The age of e is %d\n", e.age);
}

int main(){
    // struct employee e1;
    // struct employee *ptr;

    emp e1;
    emp *ptr;
    ptr = &e1;
    //(*ptr).code = 101; //or you can also write: ptr->code = 101;
    ptr->code = 101;
    ptr->age = 16;
    strcpy(ptr->name, "Tanmay Kumar");
    show(e1);

    return 0;
}