#include <stdio.h>
int main() {
    int menu, money, totalCost=0, cost = 0;
    char addMore;
    int stock[7] = {10, 10, 10, 10, 10, 10, 10}; // stock ของแต่ละสินค้า

    printf( "===Vending Machine===\n" ) ;
    printf( "0. Coke 10 baht\n" ) ;
    printf( "1. Green juice 12 baht\n" ) ;
    printf( "2. Americano 30 baht\n" ) ;
    printf( "3. Latae 35 baht\n" ) ;
    printf( "4. Sunflower seed 13 baht\n" ) ;
    printf( "5. Bean 20 baht\n" ) ;
    printf( "6. sour Pork 15 baht\n" ) ;

    do {
        
        // รับเมนูจนกว่าจะถูกต้องและมี stock
        while (1) {
            printf("please choose your goods(0-6)\n");
            scanf("%d", &menu);
            if (menu < 0 || menu > 6) {
                printf("Please choose orders in the list only (0-6)\n");
                continue;
            }
            if (stock[menu] <= 0) {
                printf("Sorry, out of stock\n");
                continue;
            }
            break; // ออกจาก while เมื่อเลือกถูกและมี stock
        }
            switch( menu ) {
                case 0 : cost = 10; printf( "Coke %d baht\n",cost ); break;
                case 1 : cost = 12; printf( "Green juice %d baht\n",cost ); break;
                case 2 : cost = 30; printf( "Americano %d baht\n",cost ); break;
                case 3 : cost = 35; printf( "Latae %d baht\n",cost ); break;
                case 4 : cost = 13; printf( "Sunflower seed %d baht\n",cost ); break;
                case 5 : cost = 20; printf( "Bean %d baht\n",cost ); break;
                case 6 : cost = 15; printf( "sour pork %d baht\n",cost ); break;
            }
            totalCost += cost;
            stock[menu]--; // ลด stock
        
            printf("total cost:%d\n ",totalCost);
            printf("Would you like take another order?(y,n)\n");
            scanf(" %c",&addMore);
        
    } while (addMore == 'y');

    printf( "Please put your money in : " );
    scanf( "%d", &money ) ;
    if( money >= totalCost ) {
        int change = money - totalCost ;
        printf( "Please take Your Orders above.\n") ;
        if (change > 0 ) {
            printf ("Your change is : %d baht\n", change ) ;
        }
        printf( "Thanks for using" ) ;
    } else {
        printf( "Don't have enough money. Please put in money\n" );
    }
    return 0 ;
} //end main