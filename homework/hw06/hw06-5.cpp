#include <stdio.h>

int main() {
    int num ;
    printf( "Enter number : " ) ;
    scanf( "%d", &num ) ;

    // decrement from start until 2
    for( int i = num; i > 1; i-- ) {
        // check is prime
        bool isPrime = true;
        for ( int j = 2; j * j <= i; j++ ) {
            if( i % j == 0 ) {
                isPrime = false ;
                break ;
            }//end if
        }//end for

        if( isPrime ) {
            printf( "%d ", i ) ;
        }//end if
    }//end for

    return 0 ;
}//end funtion
