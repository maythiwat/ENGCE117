#include <stdio.h>

int main() {
    int a, b ;

    printf( "Start : " ) ;
    scanf( "%d", &a ) ;

    printf( "End : " ) ;
    scanf( "%d", &b ) ;

    while( a <= b ) {
        int i = 1 ;

        while( i <= 9 ) {
            printf( "%d x %d = %d\n", a, i, a * i ) ;
            i++ ;
        }//end while

        printf( "\n" ) ;
        a++ ;
    }//end while

    return 0 ;
}//end function
