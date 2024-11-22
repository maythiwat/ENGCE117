#include <stdio.h>

int main() {
    int start, end ;

    printf( "Start : " ) ;
    scanf( "%d", &start ) ;

    printf( "End : " ) ;
    scanf( "%d", &end ) ;

    for( int i = start ; i <= end ; i++ ) {
        for( int j = 1 ; j <= 9 ; j++ ) {
            printf( "%d x %d = %d\n", i, j, i * j ) ;
        }//end for

        printf( "\n" ) ;
    }//end for

    return 0 ;
}//end function
