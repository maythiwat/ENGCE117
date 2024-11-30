#include <stdio.h>

int *GetSet( int * ) ;

int main() {
    int *data, num ;
    data = GetSet( &num ) ;

    // print out
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for

    return 0 ;
}//end function

int *GetSet( int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;

    int* tmp ;
    tmp = new int[ *num ] ;

    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < ( *num ) ; i++ ) {
        scanf( "%d", &tmp[ i ] ) ;
    }//end for

    return tmp ;
}//end function
