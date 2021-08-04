#include<stdio.h>

void displayArray(int *ptr, int n, int m);
int main(int argc, char const *argv[]){
    
    int try[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter the element number %d for %d ", i+1, j+1);
            scanf("%d", &try[i][j]);
        }
    }
    displayArray(try,2,2);
    return 0;
}
void displayArray(int *ptr, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            printf("%d\n", *(ptr+j+i));
        }
        printf("\n");
    }
}