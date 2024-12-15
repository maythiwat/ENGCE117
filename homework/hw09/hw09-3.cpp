#include <stdio.h>

int main() {
    int n = 0 ;
    int arr[ 100 ] ;
    int arr2[ 100 ] = { 0 } ;
    int idx = 0 ;

    while( n != -1 ) {
        printf( "Input value to Array1 [%d] : ", idx ) ;
        scanf( "%d", &n ) ;
        if( n != -1 ) {
            arr[ idx ] = n ;
            idx++ ;
        }//end if
    }//end while

    printf( "Array1 = " ) ;
    for( int i = 0 ; i < idx ; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }//end for

    printf( "\nArray2 = " ) ;
    for( int i = 0 ; i < idx ; i++ ) {
        printf( "%d ", arr2[ i ] ) ;
    }//end for

    printf( "\n--| Copy Data from Array1 to Array2" ) ;

    printf( "\nArray2 = " ) ;
    for( int i = 0 ; i < idx ; i++ ) {
        arr2[ i ] = arr[ i ] ; // stupid copy
        printf( "%d ", arr2[ i ] ) ;
    }//end for

    return 0 ;
}//end function
