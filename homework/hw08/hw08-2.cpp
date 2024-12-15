#include <stdio.h>

int main() {
    int n ;
    printf( "enter score : " ) ;
    scanf( "%d", &n ) ;

    for ( ; n < 50 ; ) {
        printf( "F !" ) ;
        return 0 ;
    }//end for

    for ( ; n >= 80 ; ) {
        printf( "A !" ) ;
        return 0 ;
    }//end for

    for ( ; n >= 75 ; ) {
        printf( "B+ !" ) ;
        return 0 ;
    }//end for

    for ( ; n >= 70 ; ) {
        printf( "B !" ) ;
        return 0 ;
    }//end for

    for ( ; n >= 65 ; ) {
        printf( "C+ !" ) ;
        return 0 ;
    }//end for

    for ( ; n >= 60 ; ) {
        printf( "C !" ) ;
        return 0 ;
    }//end for

    for ( ; n >= 55 ; ) {
        printf( "D+ !" ) ;
        return 0 ;
    }//end for

    for ( ; n >= 50 ; ) {
        printf( "D !" ) ;
        return 0 ;
    }//end for

    return 0 ;
}// end function
