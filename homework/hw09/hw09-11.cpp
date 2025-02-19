#include <stdio.h>

int main() {
    int r1, r2, c1, c2 ;

    printf( "Array1 Value : " ) ;
    scanf( "%d %d", &r1, &c1 ) ;

    int array1[ r1 ][ c1 ] ;
    printf( "Array1 element : " ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            scanf( "%d", &array1[ i ][ j ] ) ;
        }
    }//end for

    printf( "Array2 Value : " ) ;
    scanf( "%d %d", &r2, &c2 ) ;

    if( c1 != r2 ) {
        printf( "Matrix multiplication not possible.\n" ) ;
        return 1 ;
    }//end if

    int array2[ r2 ][ c2 ] ;
    printf( "Array2 element : " ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            scanf( "%d", &array2[ i ][ j ] ) ;
        }
    }//end for

    int result[ r1 ][ c2 ] ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            result[ i ][ j ] = 0 ;
        }
    }//end for

    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            for( int k = 0 ; k < c1 ; k++ ) {
                result[ i ][ j ] += array1[ i ][ k ] * array2[ k ][ j ] ;
            }
        }
    }//end for

     // แสดงผล Array1
    printf( "Array1\n" ) ;
    for( int i = 0 ; i < r1;  i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            printf( "%d ", array1[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    // แสดงผล Array2
    printf( "Array2\n" ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", array2[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    // แสดงผล Array1 x Array2
    printf( "Array1 x Array2\n" ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", result[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    return 0;
}//end function
