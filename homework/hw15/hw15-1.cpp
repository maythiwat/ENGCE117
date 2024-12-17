#include <stdio.h>

int main() {
    FILE *fp ;
    fp = fopen( "a.txt", "r" ) ;
    if ( fp == NULL ) {
        printf( "Error: Unable to open file!\n" ) ;
        return 0 ;
    }//end if

    char content[ 100 ] ;
    fgets( content, 100, fp ) ;

    fclose( fp ) ;

    printf( "Text in file = %s", content ) ;

    return 0 ;
}//end function
