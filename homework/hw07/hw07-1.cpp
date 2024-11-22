#include <stdio.h>

int main() {
    int count ;
    scanf( "%d", &count ) ;

    int isEven = count % 2 == 0 ;

    int i = 1 ;
    while( i <= count ) {
        if( isEven ) {
            printf( "(%d) Hello World\n", i ) ;
        } else {
            printf( "[%d] Hello World\n", i ) ;
        }//end if

        i++ ;
    }//end while

    return 0 ;
}//end function
