#include <stdio.h>

int main() {
    int n ;
    printf( "Input N : " ) ;
    scanf( "%d", &n ) ;

    int *arr ;
    arr = new int[ n ] ;

    bool *store ;
    store = new bool[ n ]{ false } ;

    for( int i = 0 ; i < n ; i++ ) {
        printf( "Element[%d] : ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
    }// end for

    // sort
    int tmp ;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( arr[ i ] < arr[ j ] ) {
                tmp = arr[ i ] ;
                arr[ i ] = arr[ j ] ;
                arr[ j ] = tmp ;
            }//end if
        }//end for
    }//end for

    // detect duplicate shitty well done
    for( int i = 0 ; i < n ; i++ ) {
        if( store[ i ] ) continue ; // already detected

        int count = 1 ;
        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( arr[ i ] == arr[ j ] ) {
                count++ ; // increment duplicates
                store[ j ] = true ; // mark index
            }//end if
        }//end for

        if( count > 1 ) {
            printf( "%d -> %d values.\n", arr[ i ], count ) ;
        } else {
            printf( "%d -> %d value.\n", arr[ i ], count ) ;
        }//end if
    }//end for

    return 0 ;
}//end function
