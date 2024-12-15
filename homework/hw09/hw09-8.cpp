#include <stdio.h>

int main() {
    int n, *arr, *sortArr ;

    printf( "Enter new element of Array : " ) ;
    scanf( "%d", &n ) ;

    arr = new int[ n ] ;
    sortArr = new int[ n ] ;

    for( int i = 0 ; i < n ; i++ ) {
        printf( "Input : " ) ;
        scanf( "%d", &arr[ i ] ) ;
    }//end for

    // copy to sortArr
    for( int i = 0 ; i < n ; i++ ) {
        sortArr[ i ] = arr[ i ] ;
    }//end for

    // sort
    int tmp ;
    for( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( sortArr[ i ] > sortArr[ j ] ) {
                tmp = sortArr[ i ] ;
                sortArr[ i ] = sortArr[ j ] ;
                sortArr[ j ] = tmp ;
            }//end if
        }//end for
    }//end for

    printf( "Array = " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }//end for

    printf( "\nThe large 3rd element = %d", sortArr[ 2 ] ) ;

    return 0 ;
}//end function
