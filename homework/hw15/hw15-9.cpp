#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp ;
    fp = fopen( "a15-9.txt", "r" ) ;
    if ( fp == NULL ) {
        printf( "Error: Unable to open file\n" ) ;
        return 0 ;
    }//end if

    char content[ 100 ] ;
    fgets( content, 100, fp ) ;

    fclose( fp ) ;

    // get return index and replace with terminator
    content[ strcspn( content, "\n" ) ] = '\0' ;

    printf( "Output: " ) ;

    int len = strlen( content ) ;
    for( int i = 0 ; i < len ; i++ ) {
        char tmp = content[ i ] ;

        if( tmp >= 'A' && tmp <= 'Z' ) { // upper
            tmp = tmp + 6 ;
            if (tmp > 'Z') {
                tmp = tmp - 26 ;
            }//end if
        } else if( tmp >= 'a' && tmp <= 'z' ) { // lower
            tmp = tmp + 6 ;
            if ( tmp > 'z' ) {
                tmp = tmp - 26 ;
            }//end if
        }//end if

        printf( "%c", tmp ) ;
    }//end for

    return 0 ;
}//end function
