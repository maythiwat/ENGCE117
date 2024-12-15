#include <stdio.h>

int main() {
    int n1, n2, n3 ;
    int *arr1, *arr2, *arr3 ;

    printf( "Enter element of Array1 : " ) ;
    scanf( "%d", &n1 ) ;

    arr1 = new int[ n1 ] ;
    for( int i = 0 ; i < n1 ; i++ ) {
        printf( "--| Array1 [%d] : ", i ) ;
        scanf( "%d", &arr1[ i ] ) ;
    }//end for

    printf( "Enter element of Array2 : " ) ;
    scanf( "%d", &n2 ) ;

    arr2 = new int[ n2 ] ;
    for( int i = 0 ; i < n2 ; i++ ) {
        printf( "--| Array2 [%d] : ", i ) ;
        scanf( "%d", &arr2[ i ] ) ;
    }//end for

    n3 = n1 + n2 ;
    arr3 = new int[ n3 ] ;

    for( int i = 0 ; i < n1 ; i++ ) {
        arr3[ i ] = arr1[ i ] ;
    }//end for

    for( int i = 0 ; i < n2 ; i++ ) {
        arr3[ n1 + i ] = arr2[ i ] ;
    }//end for

    // sort
    int tmp ;
    for( int i = 0 ; i < n3 ; i++ ) {
        for ( int j = 0 ; j < n3 ; j++ ) {
            if ( arr3[ i ] > arr3[ j ] ) {
                tmp = arr3[ i ] ;
                arr3[ i ] = arr3[ j ] ;
                arr3[ j ] = tmp ;
            }//end if
        }//end for
    }//end for

    printf( "Merge Array1 & Array2 to Array3\n" ) ;
    printf( "Array3 = " ) ;

    for( int i = 0 ; i < n3 ; i++ ) {
        printf( "%d ", arr3[ i ] ) ;
    }//end for

    return 0 ;
}//end function
