/*             Project 1: Number Gusessing Game
Problem:This is going to be fun!
        We'll write a program that generates a random number and asks the player to guess it.
        If the player's guess is higher than the generated number, the program displays;
        "Lower number please". Similarly, if the user's guess is lower, the program prints;
        "Higher number please".
        When the user's guess is correct, the program displays the number of guesses 
        the player used to arrive at the correct number.
Hint:   1. Use loops  2. Use a random number generator 
*/
#include<stdio.h>
#include<stdlib.h>//This library includes rand(), for generating random number
#include<time.h>//This library includes time() function
    int main(){
    //Random Number Generator:
        int number;
        srand(time(0));//time(0) returns time in sec. To generate different random no. each time
        // number=rand();//To generate random number
        // number= rand()%100 +1 ;//To generate number between 1 to 100
        number= rand()%50 +1 ;////To generate number between 1 to 50
        //Just for knowing what the random number is:
        //printf("\nThe random number is %d\n", number);//but we want to generate no. from 1 to 50
    
    //Number guessing program:
        //Keep running the loop until the number is guessed
        int guess, guess_count=0;
        printf("\nWelcome!\nGuess The Number Between 1 to 50 ;)\n");
        do{
            scanf("%d",&guess);
            guess_count++;
            if(guess==number){
                printf("Great!\nYou have guessed the correct number:%d\n",number);
                break;}
            else if(guess>number){
                printf("Lower number please\n");
                }
            else if(guess<number){
                printf("Higher number please\n");
                }

        } while(guess!=number);
        printf("Hey,Lower the guessing count, higher the score\n");
        printf("Your Guessing count is: %d\n",guess_count);
        printf("Thanks for playing, ask your friend to compete with you :)");
return 0;
}