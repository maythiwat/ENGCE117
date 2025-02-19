#include <stdio.h>

int main() {
    int row, col ;

    printf( "Array element : " ) ;
    scanf( "%d %d", &row, &col ) ;

    int array[ row ][ col ] ;
    int transpose[ col ][ row ] ;

    printf( "Input : " ) ;
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            scanf( "%d", &array[ i ][ j ] ) ;
        }
    }//end for

    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            transpose[ j ][ i ] = array[ i ][ j ] ;
        }
    }//end for

    printf( "\n\n" ) ;

    printf( "Array\n" ) ;
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            printf( "%d ", array[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    printf( "Array Transpose\n" ) ;
    for(int i = 0 ; i < col ; i++ ) {
        for( int j = 0 ; j < row ; j++ ) {
            printf( "%d ", transpose[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    return 0 ;
}//end function
