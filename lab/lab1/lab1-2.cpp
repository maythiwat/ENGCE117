#include <stdio.h>

void GetSet( int *[], int * ) ;

int main() {
    int *data, num ;
    GetSet( &data, &num ) ;

    // print out
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for

    // clear mem
    delete[] data ;

    return 0 ;
}//end function

void GetSet( int *data[], int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;

    *data = new int[ *num ] ;

    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < ( *num ) ; i++ ) {
        scanf( "%d", &( *data )[ i ] ) ;
    }//end for
}//end function
