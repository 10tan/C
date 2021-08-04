#include<stdio.h>
#include<string.h>

// q1
// int main(int argc, char const *argv[]){
//     FILE *ptr;
//     int a,b,c;
//     ptr = fopen("q1.txt", "r");
//     fscanf(ptr, "%d %d %d", &a, &b, &c);
//     printf("The num1 is %d\n",a);
//     printf("The num2 is %d\n",b);
//     printf("The num3 is %d\n",c);
//     return 0;
// }

// q2
// void tablePrinter(char name[20]);
// void tableGenerator(int num, char name[20]);
// int main(int argc, char const *argv[]){
//     int num;
//     char name[20] = "table.txt";
//     printf("Enter the number you want the table to write : ");
//     scanf("%d", &num);
//     tableGenerator(num , name);
//     tablePrinter(name);
//     return 0;
// }
// void tableGenerator(int num, char name[20]){
//     FILE *ptr;
//     ptr = fopen(name, "w");
//     char table;
//     for(int i=0;i<10;i++){
//         fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
//     }
// }
// void tablePrinter(char name[20]){
//     FILE *ptr;
//     ptr = fopen(name, "r");
//     char c = fgetc(ptr);
//     while(c!=EOF){
//         printf("%c", c);
//         c = fgetc(ptr);
//     }
// }

// q3
// int main(int argc, char const *argv[]){
//     FILE *file1;
//     FILE *file2;
//     file1 = fopen("q3.txt", "r");
//     file2 = fopen("q3_.txt", "w");
//     char c = fgetc(file1);
//     while(c!=EOF){
//         printf("%c", c);
//         fputc(c, file2);
//         fputc(c, file2);
//         c = fgetc(file1);
//     }
//     return 0;
// }

// q4
// typedef struct employee{
//     char name[100];
//     int salary;
// } employee;
// int main(int argc, char const *argv[]){
//     employee e1, e2;
//     FILE *profiles;
//     profiles = fopen("profiles_q4.txt", "w");
//     printf("Enter the name of employee 1 : ");
//     gets(e1.name);
//     printf("Enter the salary of employee 1 : ");
//     scanf("%d", &e1.salary);
//     fflush(stdin);
//     printf("Enter the name of employee 2 : ");
//     gets(e2.name);
//     printf("Enter the salary of employee 2 : ");
//     scanf("%d", &e2.salary);
//     fprintf(profiles, "Name : %s, Salary : %d\n", e1.name, e1.salary);
//     fprintf(profiles, "Name : %s, Salary : %d\n", e2.name, e2.salary);
//     return 0;
// }

// q5
// int main(int argc, char const *argv[]){
//     FILE *ptr;
//     ptr = fopen("q5.txt", "r");
//     int num;
//     fscanf(ptr, "%d", &num);
//     fclose(ptr);
//     num = 2 * num;
//     ptr = fopen("q5.txt", "w");
//     printf("%d", num);
//     fprintf(ptr, "%d", num);
//     fclose(ptr);
//     return 0;
// }
