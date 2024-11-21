#include <stdio.h>

int main() {
    int c;
    scanf( "%d", &c );

    int isEven = c % 2 == 0 ;

    int i = 0 ;

    while( i < c ) {
        if( isEven ) {
            printf( "(%d) Hello World\n", i + 1 ) ;
        } else {
            printf( "[%d] Hello World\n", i + 1 ) ;
        }

        i++ ;
    }//end while

    return 0 ;
}//end function
