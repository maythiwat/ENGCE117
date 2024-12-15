#include <stdio.h>

int main() {
    char arr[ 100 ] ;

    int idx = 0 ;
    while( true ) {
        char tmp ;
        printf( "Enter 1 character : " ) ;
        scanf( " %c", &tmp ) ;

        if( tmp == 'y' || tmp == 'Y' ) {
            arr[ idx ] = '\0' ;
            break ;
        }//end if

        arr[ idx ] = tmp ;
        idx++ ;
    }// end while

    printf( "String = " ) ;
    for( int i = 0 ; i < idx ; i++ ) {
        printf( "%c ", arr[ i ] ) ;
    }//end for

    return 0 ;
}//end function
