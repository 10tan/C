#include<stdio.h>   
#include<stdlib.h>
#include<time.h>
int snake(char you){
    if(you == 'w'){
        return -1;
    }else{
        return 1;
    }
}
int water(char you){
    if(you == 'g'){
        return -1;
    }else{
        return 1;
    }
}
int gun(char you){
    if(you == 's'){
        return -1;
    }else{
        return 1;
    }
}
void game(int result){
    if(result == 0){
        printf("Tie \n");            
    }else if(result == 1){
        printf("Win \n");        
    }else if(result == -1){
        printf("Lose \n");        
    }else{
        printf("Wrong \n");
    }
}
int snakeWaterGun(char you, char comp){
    if(you == comp){
        return 0;
    }
    if(comp == 's'){
        snake(you);
    }else if(comp == 'w'){
        water(you);
    }else if(comp == 'g'){
        gun(you);
    }else{
        return 10;
    }
}
void main(int argc, char const *argv[]){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<33){
        comp = 's';
    }else if(number>33 && number<66){
        comp = 'w';
    }else{
        comp = 'g';
    }
    printf("Enter s for snake , w for water , g for gun and q to quit: ");
    scanf("%c", &you);
    printf("You : %c \nComputer : %c\n", you, comp);
    game(snakeWaterGun(you, comp));
}
