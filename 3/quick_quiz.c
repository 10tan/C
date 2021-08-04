#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Marks : ");
    scanf("%d", &marks);
    if (marks > 100){
        printf("Wrong");
    }else if(marks <= 100 && marks >= 90){
        printf("A");
    }else if(marks <= 90 && marks >= 80){
        printf("B");
    }else if(marks <= 80 && marks >= 70){
        printf("C");
    }else if(marks <= 70 && marks >= 60){
        printf("D");
    }else if (marks <= 60){
        printf("F");
    }else{
        printf("Wrong");
    }
    
    
    return 0;
}