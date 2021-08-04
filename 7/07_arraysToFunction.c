#include<stdio.h>

void printArray(int *ptr, int n);

void main(int argc, char const *argv[]){
    int n[] = {0,1,2,3,4,5,6,7,8,9,10};
    printArray(n, 10);
}
void printArray(int *ptr, int n){
    for(int i=0; i < n; i++){
        printf("%d\n", *(ptr+i));
    }
    ptr[2] = 321312; // changes the value of the third element in the arrray

}