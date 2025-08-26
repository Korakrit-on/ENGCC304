#include <stdio.h>
int main() {
    int choice , money, totalCost=0, price = 0;
    char addMore;
    printf( "===Vending Machine===\n" ) ;
    printf( "0. Coke 10 baht\n" ) ;
    printf( "1. Green soda 12 baht\n" ) ;
    printf( "2. Americano 30 baht\n" ) ;
    printf( "3. Latae 35 baht\n" ) ;
    printf( "4. Sunflower seed 13 baht\n" ) ;
    printf( "5. Bean 20 baht\n" ) ;
    printf( "6. Pork 15 baht\n" ) ;
    scanf( "%d", &choice ) ;//list of drinks

    switch( choice ) {
        case 0 :
            price = 10 ; 
            printf( "Coke %d baht\n",price ) ; 
            break ;
        case 1 : 
            price = 12 ; 
            printf( "Green soda %d baht\n",price ) ; 
            break ;
        case 2 :
            price = 30 ; 
            printf( "Americano %d baht\n",price ) ; 
            break ; 
        case 3 :
        price = 35 ; 
            printf( "Latae %d baht\n",price ) ; 
            break ;    
        case 4 :
            price = 13 ; 
            printf( "Sunflower seed %d baht\n",price ) ; 
            break ;    
        case 5 :
            price = 20 ; 
            printf( "Bean %d baht\n",price ) ; 
            break ;
        case 6 :
            price = 15 ; 
            printf( "Pork %d baht\n",price ) ; 
            break ;
        default :
            printf( "===============================\n" "We Don't Have Your That Drinks\n" ) ;
            break ;
            return 1 ;
    }//end switch

    printf("total cost:%d\n ",totalCost);
    
    totalCost += price;





    printf( "Please put your money in : " );
    scanf( "%d", &money ) ;
        if( money >= price ) {
            int change = money - price ;
            printf( "Please Receive Your Drinks\n" ) ;
                if (change > 0 ) {
                printf ("Your change is : %d baht\n", change ) ;
                }
            printf( "Thanks for using" ) ;
        } else {
            printf( "Don't have enough money . Please put in money\n" );
        }
    return 0 ;//end เงินทอน
}

