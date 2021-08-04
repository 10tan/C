#include<stdio.h>
#include<math.h>

int area(int side);

int main(int argc, char const *argv[]){
    int side;
    scanf("%d", &side);
    printf("The area is %d", area(side));
    return 0;
}

int area(int side){
    return pow(side,2);
}
