#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main() {
    int score = 100;
    int random = rand() % 100 + 1;
    int guess;
    int playAgain = 1;
    srand( time( NULL ) ) ;
    while (playAgain == 1){
      
        while(score > 0) {
            printf("Guess the winning number (1-100):\n");
            scanf("%d",&guess);
        
        if (guess == random) {
                printf("That is correct! The winning number is %d\n\n",guess);
                printf("Your score: %d\n\n", score);
                break;
        } else {
            score -= 10;
        }
        if(guess < random) {
            printf("Sorry, the winning number is HIGHER than %d\n\n",guess);
        } else {
            printf("Sorry, the winning number is LOWER than %d\n\n",guess);
        }
        printf("Score this game: %d\n\n", score);
    }
    
    printf("Enter 1 to play again, -1 to exit: \n");
    scanf("%d", &playAgain);
    }
    
    printf("See you again.\n");
    return 0;
}
  

    