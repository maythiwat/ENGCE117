#include <stdio.h>

int main() {
    const int arr[] = { 99, 18, 27, 16, 74, 28, 43, 47, 25, 10, 88 } ;

    int n ;
    printf( "Input N : " ) ;
    scanf( "%d", &n ) ;

    int min = 999 ; // higher than limit
    int max = -999 ; // lower than limit

    printf( "Index: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( i < 10 ? " %d " : "%d ", i ) ;
    }//end for

    printf( "\nArray: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", arr[ i ] ) ;

        if ( arr[ i ] > max ) {
            max = arr[ i ] ;
        }// end if

        if ( arr[ i ] < min ) {
            min = arr[ i ] ;
        }// end if
    }//end for

    printf( "\n" );
    printf( "\nMax = %d", max ) ;
    printf( "\nMin = %d", min ) ;

    return 0 ;
}//end function
