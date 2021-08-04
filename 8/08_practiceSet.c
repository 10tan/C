#include<stdio.h>
#include<string.h>

// q2
// int main(int argc, char const *argv[]){
//     char st[100], st1[100],c;
//     int i = 0;
//     printf("Enter the value of the first string : ");
//     gets(st);
//     fflush(stdin);
//     printf("Enter the value of the second string character by character : ");
//     scanf("%c", &c);
//     while(c!='\n'){
//         fflush(stdin);
//         scanf("%c", &c);
//         st1[i] = c;
//         i++;
//     }
//     st1[i-1] = '\0';
//     printf("%s\n", st);
//     printf("%s\n", st1);
//     printf("The strcat of st and st1 is %d", strcmp(st,st1));
//     return 0;
// }

// q3
// int strlength(char * st){
//     char *ptr = st;
//     int len=0;
//     while(*ptr!='\0'){
//         len++;
//         ptr++;
//     }
//     return len;
// }
// int main(){
//     char st[] = "Harry";
//     int l = strlength(st);
//     printf("The length of this string is %d", l);
//     return 0;
// }

// q4
// char slice(char *st, int m,int n){
//     int i=0;
//     while(){
//         i++;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     char st = "Tanmay";
//     slice(st,1,3);
//     return 0;
// }

// q5 && q6
// void encrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr = *ptr + 1; 
//         ptr++;
//     }
// }
// void decrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr = *ptr - 1; 
//         ptr++;
//     }
// }
// int main(){
//     char c[] = "Hello World";
//     char d[] = "Ifmmp!Xpsme";
//     encrypt(c);
//     printf("Encrypted string is: %s\n", c);
//     decrypt(d);
//     printf("Decrypted string is: %s\n", d);
//     return 0;
// }

// q7
// int occur(char st[], char c){
//     char *ptr = st;
//     int count = 0;
//     while ((*ptr!='\0')){
//         if(*ptr == c){
//             count++;
//         }
//         ptr++; 
//     }
//     return count;
// }
// int main(int argc, char const *argv[])
// {
//     char st[] = "Anoushkha Singh";
//     printf("The count of A in %s is %d", st, occur(st,'a'));
//     return 0;
// }
