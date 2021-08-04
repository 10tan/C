#include<stdio.h>
int main(int argc, char const *argv[]){
    int students = 2, subjects = 2;
    int marks[3][5];

    for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            printf("Enter the marks of %d in subject %d : ",i+1,j+1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            printf("The marks of %d in subject %d is %d\n",i+1,j+1, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}