#include<stdio.h>
int main(){
    int number=25;
    int guess;
    printf("guess a number(1 and 50): ");
    scanf("%d", &guess);
    while(guess!=number){
        if(guess>number){
            printf("too high! try again: ");
        }
        else{
            printf("too low! try again: ");
        }
        scanf("%d", &guess);
    }
    printf("Congratulations! You guessed the number correctly.");
     return 0;
}