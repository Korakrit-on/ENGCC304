#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main() {
    int score = 100;
    int random = rand() % 100 + 1;
    int guess;
    srand( time( NULL ) ) ;
    
    while(score > 0) {
        printf("Guess the winning number (1-100):\n");
        scanf("%d",&guess);

        
        if(guess < random) {
            printf("Sorry, the winning number is HIGHER than (%d - 100) ",guess+=1);
        }
    }
    
    
        
    }
