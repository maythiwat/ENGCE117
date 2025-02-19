#include <stdio.h>

long fibonacci( int n ) ;

int main() {
    int n, sum = 0 ;

    scanf( "%d", &n ) ;

    printf( "Series = " ) ;
    for( int i = 1 ; i <= n ; i++ ) {
        int fib = fibonacci( i ) ;
        sum += fib ;
        printf( "%d" , fib ) ;
        if( i < n ) printf( " + " ) ;
    }//end for

    printf( "\nSum = %d\n", sum ) ;

    return 0 ;
}//end function

long fibonacci( int n ) {
    if ( n <= 0 ) return 0 ;
    if ( n == 1 ) return 1 ;
    return fibonacci( n - 1 ) + fibonacci( n - 2 ) ;
}//end function
