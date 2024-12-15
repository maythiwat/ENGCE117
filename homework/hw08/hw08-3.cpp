#include <stdio.h>

int main() {
    int n ;
    scanf( "%d", &n ) ;

    // dynamic array
    int *arr ;
    arr = new int[ n ]{ 1, 1 } ; // initial value but skip zero (0, 1, 1, ...)

    for( int i = 2 ; i <= n ; i++ ) {
        // current = sum of two index before
        arr[ i ] = arr[ i - 1 ] + arr[ i - 2 ] ;  
    }//end for

    printf( "Series = " ) ;

    int sum = 0 ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d", arr[ i ] ) ;

        if( i < n - 1 ) {
            printf( " + " ) ;
        }//end if

        sum += arr[ i ] ;
    }//end for

    printf( "\nSum = %d", sum ) ;

    return 0 ;
}//end function
