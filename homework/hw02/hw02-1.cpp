#include <stdio.h>

int main() {
    char ans ;

    printf( "Your have instant noodles? (y/n) : " ) ;
    scanf( " %c" , &ans ) ;

    if( ans == 'y' ) {
        printf( "Add water \n" ) ;
        printf( "Boil water \n" ) ;
        printf( "Turn on the gas \n" ) ;
        printf( "Wait for the water to boil \n" ) ;
        printf( "Out of gas? (y/n) : " ) ;
        scanf( " %c", &ans ) ;

        if( ans == 'y' ) {
            printf( "Ask for help from adults" ) ;
        } else {
            while( ans != 'y' ) {
                printf( "Wait for the water to boil \n" ) ;
                printf( "Boiling water? (y/n) : " ) ;
                scanf( " %c", &ans ) ;
            }//end while
            printf( "Scoop the noodles out of the pot. \n" ) ;
            printf( "Put the noodles in the bowl \n" ) ;
            printf( "Put the seasonings in a bowl \n" ) ;
            printf( "Turn off the gas \n" ) ;
            printf( "Scoop the noodles into a bowl \n" ) ;
        }//end if
    } else {
        printf( "Ask for money from adults \n" ) ;
        printf( "Go shopping at the market \n" ) ;
        printf( "Out of stock? (y/n) : " ) ;
        scanf( " %c", &ans ) ;

        if( ans == 'y' ) {
            printf( "Find other products" ) ;
        } else {
            printf( "Do you have enough money?? (y/n) : " ) ;
            scanf( " %c", &ans ) ;
            if( ans == 'y' ) {
                printf( "Buy noodles" ) ;
            } else {
                printf( "Ask for more money" ) ;
            }//end if
        }//end if
    }//end if

    return 0 ;
}//end function
