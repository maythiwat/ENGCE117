#include <stdio.h>

int main() {
    int num ;
    printf( "Input : " ) ;
    scanf( "%d", &num ) ;

    if( num % 2 == 0 ) {
        printf( "%d is an even integer", num ) ;
    } else {
        printf( "%d is an odd integer", num ) ;
    }//end if

    return 0 ;
}//end function
