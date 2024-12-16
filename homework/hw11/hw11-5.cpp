#include <stdio.h>

int get_max_height( int Height[ 10 ] ) ;

void get_max_age( int Age[ 10 ], int *maxAge ) ;

int main() {
    int Height[ 10 ] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[ 10 ] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;

    int maxHeight = get_max_height( Height ) ;
    printf( "Max Height = %d\n", maxHeight ) ;

    int maxAge ;
    get_max_age( Age, &maxAge ) ;
    printf( "Max Age = %d\n", maxAge ) ;

    return 0 ;
}//end function

int get_max_height( int Height[ 10 ] ) {
    int max = -1 ;

    for( int i = 0 ; i < 10 ; i++ ) {
        if ( Height[ i ] > max ) {
            max = Height[ i ] ;
        }//end if
    }//end for

    return max ;
}//end function

void get_max_age( int Age[ 10 ], int *max ) {
    for( int i = 0 ; i < 10 ; i++ ) {
        if ( Age[ i ] > ( *max ) ) {
            *max = Age[ i ] ;
        }//end if
    }//end for
}//end function
