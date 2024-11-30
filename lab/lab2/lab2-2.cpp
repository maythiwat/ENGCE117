#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
    printf( "%s", out ) ; // print out result
    return 0 ;
}//end function

char* reverse( char str1[] ) {
    int len = strlen( str1 ) ;

    char *tmp ;
    tmp = new char[ len ] ;

    for( int i = 0 ; i < len ; i++ ) {
        tmp[ len - 1 - i ] = str1[ i ] ;
    }//end for

    tmp[ len ] = '\0' ; // null

    return tmp ;
}//end function
