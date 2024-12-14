#include <stdio.h>

int main() {
    int num ;
    printf( "Input : " ) ;
    scanf( "%d", &num ) ;

    if( num > 0 ) {
        printf( "Positive" ) ;
    } else {
        printf( "Negative" ) ;
    }//end if

    return 0 ;
}//end function
