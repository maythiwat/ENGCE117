#include <stdio.h>

int main() {
    int row1, col1, row2, col2 ;
    int arr1[10][10], arr2[10][10] ;

    printf( "Array1 element : " ) ; 
    scanf( "%d %d" , &row1 , &col1 ) ;

    printf( "Input : \n" ) ;
    for( int i = 0 ; i < row1 ; i++ ) {
        for( int j = 0 ; j < col1 ; j++ ) {
            scanf( "%d" , &arr1[ i ][ j ] ) ;
        }//end for
    }//end for

    printf( "Array2 element : " ) ; 
    scanf( "%d %d" , &row2 , &col2 ) ;

    printf( "Input : \n" ) ;
    for( int i = 0 ; i < row2 ; i++ ) {
        for( int j = 0 ; j < col2 ; j++ ) {
            scanf( "%d" , &arr2[ i ][ j ] ) ;
        }//end for
    }//end for

    if( row1 != row2 || col1 != col2 ) {
        printf( "Unable to process (size is different)" ) ;
        return 0 ;
    }//end if

    printf( "Array1 + Array2 = Array3\n" ) ; 
    for( int i = 0 ; i < row1 ; i++ ) {
        for( int j = 0 ; j < col1 ; j++ ) {
            printf( "%d " , arr1[ i ][ j ] + arr2[ i ][ j ] ) ;
        }//end for

        printf( "\n" ) ;
    }//end for

    return 0 ;
}//end function
