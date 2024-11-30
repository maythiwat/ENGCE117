#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    printf( "%s", out ) ; // print out result
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    int len = strlen( str1 ) ;

    for( int i = 0 ; i < len ; i++ ) {
        str2[ len - 1 - i ] = str1[ i ] ;
    }//end for

    str2[ len ] = '\0' ; // null
}//end function
