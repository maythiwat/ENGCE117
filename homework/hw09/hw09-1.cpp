#include <stdio.h>

int main() {
    int n = 0 ;
    int arr[ 100 ] ;
    int idx = 0 ;

    while( n != -1 ) {
        printf( "Input [%d] : ", idx ) ;
        scanf( "%d", &n ) ;
        if( n != -1 ) {
            arr[ idx ] = n ;
            idx++ ;
        }//end if
    }//end while

    printf( "Index = " ) ;
    for( int i = 0 ; i < idx ; i++ ) {
        printf( "%d ", i ) ;
    }//end for

    printf( "\nArray = " ) ;
    for( int i = 0 ; i < idx ; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }//end for

    return 0 ;
}//end function
