#include <stdio.h>

long FacRecur( int n ) ;

int main() {
    int n ;
    scanf( "%d", &n ) ;

    printf( "%d! = ", n ) ;
    long sum = FacRecur( n ) ;
    printf( "\n%d! = %d", n, sum ) ;

    return 0 ;
}//end function

long FacRecur( int n ) {
    if ( n > 1 ) {
        printf( "%d x ", n );
        return n * FacRecur( n - 1 ) ;
    }//end if

    printf( "1" ) ;
    return 1 ;
}//end function
