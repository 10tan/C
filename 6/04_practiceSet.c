#include<stdio.h>

// q1
// int main(int argc, char const *argv[]){
//     // q1
//     // int a;
//     // scanf("%d", &a);
//     // int *d = &a;
//     // printf("%u", *d);

// }

// q2
// void q2(int i);
// int main(int argc, char const *argv[]){
//     int i;
//     scanf("%d", &i);
//     q2(i);
//     printf("%u\n", &i);
//     return 0;
// }
// void q2(int i){
//     printf("%u\n", &i);
// }

// q3
// void increaser(int *a);
// int main(int argc, char const *argv[])
// {
//     int i = 10;
//     printf("Value of I is %d\n", i);
//     printf("Address of I is %u\n", &i);

//     increaser(&i);
//     printf("Increased Value of I is %d\n", i);
//     return 0;
// }
// void increaser(int *a){
//     int n = *a;
//     n = n * 10;
//     *a = n;
// }

// q4
// void sumAverage(int a,int b,int *sum, int *average);
// int main(int argc, char const *argv[])
// {
//     int a = 10,b=12;
//     int sum,average;
//     printf("A is %d and b is %d\n", a,b);

//     sumAverage(a,b,&sum,&average);
//     printf("Sum is : %d\n", sum);
//     printf("Average is : %d\n", average);
//     return 0;
// }
// void sumAverage(int a,int b,int *sum, int *average){
//     int n = a + b, m = n/2; 
//     *sum = n;
//     *average = m;
// }

// Q5
// int main(int argc, char const *argv[])
// {
//     int i = 10;
//     int *a;
//     int **b;
//     a = &i;
//     b = &a;
//     printf("The value of i from pointer to pointer is %u ", **b);
//     return 0;
// }

// q6
void increaser(int a);
int main(int argc, char const *argv[])
{
    int i = 10;
    printf("Value of I is %d\n", i);
    printf("Address of I is %d\n", i);

    increaser(i);
    printf("Increased Value of I is %d it doesnt work LOL!!\n ", i);
    return 0;
}
void increaser(int a){
    int n = a;
    n = n * 10;
    a = n;
}