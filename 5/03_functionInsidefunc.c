#include<stdio.h>

void goodMorning();
void goodAfterNoon();
void goodNight();

int main(int argc, char const *argv[]){
    goodMorning();
    return 0;
}
void goodMorning(){
    printf("Good Morning Tanmay\n");
    goodAfterNoon();
}
void goodAfterNoon(){
    printf("Good AfterNoon Tanmay\n");
    goodNight();
}
void goodNight(){
    printf("Good Night Tanmay\n");
}
