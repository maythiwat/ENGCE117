#include <stdio.h>

void DisplayMatrix( int matrix[][ 5 ], int size ) ;

int main() {
    int size ;
    printf( "Input cube size: " ) ;
    scanf( "%d", &size ) ;

    int matrix[ 5 ][ 5 ] ;
    printf( "Input element:\n" ) ;
    for( int i = 0 ; i < size ; i++ ) {
        for( int j = 0 ; j < size ; j++ ) {
            scanf( "%d", &matrix[ i ][ j ] ) ;
        }
    }//end for

    int choice ;
    printf( "Show zero (1=Left, -1=Right): " ) ;
    scanf( "%d", &choice ) ;
    
    printf( "\n" ) ;
    printf( "Matrix =\n" ) ;
    DisplayMatrix( matrix, size ) ;

    if( choice == 1 ) {
        for( int i = 1 ; i < size ; i++ ) {
            for( int j = 0 ; j < i ; j++ ) {
                matrix[ i ][ j ] = 0 ;
            }
        }
        printf( "Left Matrix =\n" ) ;
    } else if( choice == -1 ) {
        for( int i = 0 ; i < size - 1 ; i++ ) {
            for( int j = i + 1 ; j < size ; j++ ) {
                matrix[ i ][ j ] = 0 ;
            }
        }
        printf( "Right Matrix =\n" ) ;
    } else {
        printf( "Invalid input.\n" ) ;
    }//end if

    DisplayMatrix( matrix, size ) ;

    return 0 ;
}//end function

void DisplayMatrix( int matrix[][ 5 ], int size ) {
    for( int i = 0 ; i < size ; i++ ) {
        for( int j = 0 ; j < size ; j++ ) {
            printf( "%d ", matrix[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for
}//end function
