#include <stdio.h>

void GetMatrix( int *value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;

    // print out matrix
    printf( "Matrix (%dx%d): \n", m, n ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for

        // line break on new row
        printf("\n") ;
    }//end for

    // clear mem
    delete[] data ;

    return 0 ;
}//end function

void GetMatrix( int *value[], int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;

    int size = ( *row ) * ( *col ) ;
    *value = new int[ size ] ;

    printf( "Enter the matrix elements: " ) ;
    for( int i = 0 ; i < size ; i++ ) {
        scanf( "%d", &( *value )[ i ] ) ;
    }//end for
}//end function
