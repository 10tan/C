#include<stdio.h>

void display(); //=> function prototype

int main(int argc, char const *argv[])
{
    display();
    return 0;
}
void display(){
    printf("Function Prototype");
}