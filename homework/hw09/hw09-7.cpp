#include <stdio.h>

int main() {
    int arr[ 5 ] = { 9, 2, 6, 1, 7 } ;
    int n1, n2 ;
    int *insArr, *newArr ;

    printf( "Enter new element of Array : " ) ;
    scanf( "%d", &n1 ) ;

    insArr = new int[ n1 ] ;
    for( int i = 0 ; i < n1 ; i++ ) {
        printf( "Input : ", i ) ;
        scanf( "%d", &insArr[ i ] ) ;
    }//end for

    n2 = n1 + 5 ;
    newArr = new int[ n2 ] ;

    for( int i = 0 ; i < 5 ; i++ ) {
        newArr[ i ] = arr[ i ] ;
    }//end for

    for( int i = 0 ; i < n2 ; i++ ) {
        newArr[ 5 + i ] = insArr[ i ] ;
    }//end for

    // sort
    int tmp ;
    for( int i = 0 ; i < n2 ; i++ ) {
        for ( int j = 0 ; j < n2 ; j++ ) {
            if ( newArr[ i ] < newArr[ j ] ) {
                tmp = newArr[ i ] ;
                newArr[ i ] = newArr[ j ] ;
                newArr[ j ] = tmp ;
            }//end if
        }//end for
    }//end for

    printf( "Old Array: " ) ;
    for( int i = 0 ; i < 5 ; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }//end for

    printf( "\nNew Array: " ) ;
    for( int i = 0 ; i < n2 ; i++ ) {
        printf( "%d ", newArr[ i ] ) ;
    }//end for

    return 0 ;
}//end function
