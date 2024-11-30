#include <stdio.h>

int* GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;

    // print out matrix
    printf( "Enter number of rows and columns: %d %d \n", m, n ) ;
    printf( "Enter matrix elements: \n" ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for

        // line break on new row
        printf("\n") ;
    }//end for

    return 0 ;
}//end function

int* GetMatrix( int *row, int *col ) {
    scanf( "%d", row ) ;
    scanf( "%d", col ) ;

    int size = ( *row ) * ( *col ) ;
    int *tmp ;
    tmp = new int[ size ] ;

    for( int i = 0 ; i < size ; i++ ) {
        scanf( "%d", &tmp[ i ] ) ;
    }//end for

    return tmp ;
}//end function
