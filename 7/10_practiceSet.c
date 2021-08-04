#include<stdio.h>

// q1`
// int main(int argc, char const *argv[]){
    
//     int arr[10];
//     int *ptr = &arr[0];
//     ptr = ptr+2;
//     if ((ptr) == &arr[2]){
//         printf("Same location");
//     }else{
//         printf("Different location");
//     }
    
//     return 0;
// }    

// Q3
// int main(int argc, char const *argv[])
// {
//     int table[10];
//     for (int i = 0; i < 10; i++){
//         table[i] = (i+1)*5;
//     }
//     for (int i = 0; i < 10; i++){
//         printf("5 X %d = %d\n",i+1, table[i]);
//     }
//     return 0;
// }

// q4
// int main(int argc, char const *argv[])
// {
//     int table[10];
//     int n;
//     printf("Enter the number you want to print the table of : ");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++){
//         table[i] = (i+1)*n;
//     }
//     for (int i = 0; i < 10; i++){
//         printf("%d X %d = %d\n",n, i+1, table[i]);
//     }
//     return 0;
// }

// q5
void reverseArray(int *arr, int n);
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,2,3,4,5,6,7};
//     reverseArray(arr,7);
//     for (int i = 0; i < 7; i++){
//         printf("%d \n", arr[i]);
//     }
//     return 0;
// }
// void reverseArray(int *arr, int n){
//     int temp;
//     for(int i=0; i<n/2;i++){
//         temp = arr[i];
//         arr[i] = arr[n-1-i];
//         arr[n-1-i] = temp;
//     }
// }

// q6
// void counter(int *arr, int n);
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,-2,-3,-5,1,3,562,-3,-534,2,03,-34};
//     counter(arr, 12);
//     return 0;
// }
// void counter(int *arr,int n){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] > 0){
//             count++;
//         }else{
//             count = count;
//         }
//     }
//     printf("%d", count);
// }

// q7
// void printTable(int *mulTable, int num, int n){
//     printf("The multiplication table of %d is :\n", num);
//     for(int i=0; i<n; i++){
//         mulTable[i] = num*(i+1);
//     }

//     for(int i=0; i<n; i++){
//         printf("%d X %d = %d\n", num, i+1, mulTable[i]);
//     }
//     printf("\n\n");
// }

// int main(){
//     int mulTable[3][10];
//     printTable(mulTable[0], 2, 10);
//     printTable(mulTable[1], 7, 10);
//     printTable(mulTable[2], 9, 10);

//     return 0;
// }

// q8
// int main(int argc, char const *argv[])
// {
//     int table;
//     printf("Enter the table no you want to print : ");
//     scanf("%d", &table);

//     for(int i=0;i<10;i++){
//         printf("%d X %d = %d\n", table, i+1, table*(i+1));
//     }
//     return 0;
// }

// q9
// int main(int argc, char const *argv[])
// {
//     int arr[2][3][4];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<3;k++){
//                 printf("The address of arr[%d][%d][%d] is %u \n", i,j,k, &arr[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }

//     return 0;
// }
