#include <stdio.h>

int main() {
    int n ;

    printf( "Input n : " ) ;
    scanf( "%d", &n ) ;

    for( int i = 1 ; i <= n ; i++ ) {
        printf( "[%d] Hello world\n", i ) ;
    }//end for

    return 0 ;
}//end function
