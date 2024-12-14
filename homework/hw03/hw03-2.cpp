#include <stdio.h>

int main() {
    float a, b = 3 ;
    bool _1 = 0 ;

    printf( "%d ", _1 ) ;

    int i = 0 ;
    if( _1 != 0 ) {
        printf( "ok " ) ;
    } else {
        while( i <= 5 ) {
            printf( " not-okey-%d ", ++i ) ;
        }//end while
    }//end if

    for( i = 3 ; i < 10 ; i += 1 ) {
        if( i % 2 == ( !_1 ? 1 : 2 ) ) {
            printf( "see see" ) ;
        } else {
            printf( "haha" ) ;
        }//end if
    }//end for

    return 0 ;
}//end function
