#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

    // Generating random number
    int num, guess, n_guess = 1 ;
    srand(time(0));
    num = rand()%100 + 1;
    // printf("%d\n", num);
    do
    {
        printf("Guess the number between 1 and 100 : ");
        scanf("%d", &guess);
        if(guess>num){
            printf("Lower Number Please\n");
            n_guess = n_guess + 1;
        }else if(guess<num){
            n_guess = n_guess + 1;
            printf("Higher Number Please\n");
        }else if(guess == num){
            printf("You guessed the correct number in %d chances --> Correct Number is %d", n_guess, num);
        }
    } while (guess!=num);
    


    return 0;
}