#include<stdio.h>
int main(int argc, char const *argv[]){
    FILE *ptr;
    
    // text files e.g --> .txt, .c, .py, .java, .xml
    // binary files e.g --> .jpg, .mp3, .mp4

    ptr = fopen("sample1.txt", "r"); // read the file
    ptr = fopen("sample2.txt", "rb"); // read the file in binary
    ptr = fopen("sample3.txt", "w"); //write the file
    ptr = fopen("sample4.txt", "wb"); //write the file in binary
    ptr = fopen("sample5.txt", "a"); //to append or add something at the end

    return 0;
}