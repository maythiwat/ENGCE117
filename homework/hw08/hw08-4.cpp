#include <stdio.h>

int main() {
    int n ;
    scanf( "%d", &n ) ;

    printf( "%d! = ", n ) ;

    int sum = 1;
    int mul = n ;
    while( mul > 0 ) {
        printf( "%d", mul ) ;

        if( mul > 1 ) {
            printf( " x " ) ;
        }//end if

        sum = sum * mul ;
        mul-- ;
    }//end while

    printf( "\n" ) ;
    printf( "%d! = %d ", n, sum ) ;

    return 0 ;
}//end function
