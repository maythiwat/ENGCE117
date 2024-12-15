#include <stdio.h>

int main() {
    int num ;
    printf( "Enter number : " ) ;
    scanf( "%d", &num ) ;

    int i = num ;
    do {
        // check is prime
        bool isPrime = true ;
        for ( int j = 2 ; j * j <= i ; j++ ) {
            if( i % j == 0 ) {
                isPrime = false ;
                break ;
            }//end if
        }//end for

        if( isPrime ) {
            printf( "%d ", i ) ;
        }//end if

        // decrement from start until 2
        i-- ;
    } while( i > 1 ) ;

    return 0 ;
}//end funtion
