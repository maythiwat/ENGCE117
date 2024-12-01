#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitters[], char str2[][ 10 ], int *count );

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I,Love World/You", ", /", out, &num ) ;
    // explode( ",,   ,Hello, World!   , ,", ", /", out, &num ) ;

    // print out
    for( int i; i < num ; i++ ) {
        printf( "str2[%d] = %s \n", i, out[ i ] );
    }//end for
    printf( "count = %d \n", num );

    return 0 ;
}//end function

void explode( char str1[], char splitters[], char str2[][ 10 ], int *count ) {
    int len = strlen( str1 ) ;

    if( len == 0 ) {
        *count = 0 ;
        return ;
    }//end if

    int idx = 0 ;
    int chr = 0 ;

    for( int i = 0 ; i < len ; i++ ) {
        // current char in splitters?
        if( strchr( splitters, str1[ i ] ) != NULL ) {
            // is last char OR next char is duplicated splitter OR previous is empty idk
            if( i == ( len - 1 ) || strchr( splitters, str1[ i + 1 ] ) != NULL || chr == 0 ) {
                continue ;
            }//end if

            str2[ idx ][ chr ] = '\0' ; // null
            chr = 0 ; // reset char index
            idx++ ; // go to next array index
            continue ;
        }//end if

        str2[ idx ][ chr ] = str1[ i ] ;
        chr++ ;
    }//end for

    *count = idx + 1 ;
}//end function
