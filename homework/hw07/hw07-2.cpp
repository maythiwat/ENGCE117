#include <stdio.h>

int main() {
    int start, end ;

    printf( "Start : " ) ;
    scanf( "%d", &start ) ;

    printf( "End : " ) ;
    scanf( "%d", &end ) ;

    int i = start ;
    while( i <= end ) {
        int j = 1 ;
        while( j <= 9 ) {
            printf( "%d x %d = %d\n", i, j, i * j ) ;
            j++ ;
        }//end while

        printf( "\n" ) ;
        i++ ;
    }//end while

    return 0 ;
}//end function
