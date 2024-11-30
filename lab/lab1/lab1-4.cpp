#include <stdio.h>

int GetSet( int* [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;

    // print out
    printf( "Number of elements: %d\n", num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for

    return 0 ;
}//end function

int GetSet(int *data[]) {
    int num ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &num ) ;

    *data = new int[ num ] ;

    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < ( num ) ; i++ ) {
        scanf( "%d", &( *data )[ i ] ) ;
    }//end for

    return num ;
}//end function
