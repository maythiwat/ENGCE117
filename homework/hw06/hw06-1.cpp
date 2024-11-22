#include <stdio.h>

int main() {
    int count ;
    scanf( "%d", &count ) ;

    int isEven = count % 2 == 0 ;

    for( int i = 1 ; i <= count ; i++ ) {
        if( isEven ) {
            printf( "(%d) Hello World\n", i ) ;
        }else{
            printf( "[%d] Hello World\n", i ) ;
        }//end if
    }//end for

    return 0 ;
}//end function
