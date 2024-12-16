#include <stdio.h>
#include <string.h>

int main() {
    char data[ 100 ] ;
    fgets( data, 100, stdin ) ;

    // get return index and replace with terminator
    data[ strcspn( data, "\n" ) ] = '\0' ;
    
    int len = strlen( data ) ;
    for ( int i = 0 ; i <= len ; i++ ) {
        printf( "%c", data[ len - i ] ) ;
    }//end for

    return 0 ;
}//end function
