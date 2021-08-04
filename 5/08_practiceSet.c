#include<stdio.h>


// q1
// float average(float a,float b,float c);

// int main(int argc, char const *argv[]){
//     printf("The average is :  %f ", average(10,20,30));
//     return 0;
// }
// float average(float a, float b, float c){
//     return (a+b+c)/3 ; 
// }

// q2
// float converter(float cel);

// int main(int argc, char const *argv[])
// {
//     printf("temprature is : %f", converter(35));
//     return 0;
// }
// float converter(float cel){
//     return (cel * 9/5) + 32;
// }


// q3
// float force(float mass);
// int main(int argc, char const *argv[])
// {
//     float mass;
//     scanf("%d", &mass);
//     printf("The gravity is : %.3f Newton", force(mass));
//     return 0;
// }
// float force(float mass){
//     float gravity = mass * 9.8 ;
//     return gravity;
// }

// q4
// fibonacci sequence 
// int fib(int n);
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter no. of terms : ");
//     scanf("%d", &n);
//     printf("The fibonacci sequence term for %d is %d", n , fib(n));
//     return 0;
// }
// int fib(int n){
//     if (n==0){
//         return 0;
//     }else if(n==1){
//         return 1;
//     }else{
//         return (fib(n-1) + fib(n-2));
//     }
    
// }


// q6
// int sum(int n){
//     int s = n + sum(n-1);
//     return s;
// }
// int main(int argc, char const *argv[])
// {
//     printf("hell0");
//     int n = sum(5);
//     printf("%d", n);
//     return 0;
// }


// q7
// void printPattern(int n);
// int main(int argc, char const *argv[]){
//     int n = 8;
//     printPattern(n);
//     return 0;
// }
// void printPattern(int n){
//     if (n==1){
//         printf("*\n");
//         return;
//     }
//     printPattern(n-1);
//     for(int i=0;i<(2*n-1);i++){
//         printf("*");
//     }
//     printf("\n");
// }
