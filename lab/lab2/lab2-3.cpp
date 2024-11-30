#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", '/', out, &num ) ;

    // print out
    printf( "count = %d \n", num );
    for( int i; i < num ; i++ ) {
        printf( "str2[%d] = %s \n", i, out[ i ] );
    }//end for

    return 0 ;
}//end function

void explode( char str1[], char splitter, char str2[][10], int *count ) {
    int len = strlen( str1 ) ;

    if ( len == 0 ) {
        *count = 0 ;
        return ;
    }//end if

    int idx = 0 ;
    int chr = 0 ;

    for( int i = 0 ; i < len ; i++ ) {
        if ( str1[ i ] == splitter ) {
            // is last char OR duplicated splitter
            if ( i == ( len - 1 ) || str1[ i + 1 ] == splitter ) {
                continue ;
            }

            str2[ idx ][ chr ] = '\0' ; // null
            chr = 0 ; // reset char index
            idx++ ; // go to next array index
            continue ;
        }

        str2[ idx ][ chr ] = str1[ i ] ;
        chr++ ;
    }//end for

    *count = idx + 1 ;
}//end function
