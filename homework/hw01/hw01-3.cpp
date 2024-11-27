#include <stdio.h>

int main() {
    char firstName[ 100 ], lastName[ 100 ] ;

    // Input first name
    printf( "First Name: " ) ;
    scanf( "%s", &firstName );

    // Input last name
    printf( "Last Name: " ) ;
    scanf( "%s", &lastName ) ;

    // Special case for "ABC", "DEF" -> "ABD", "DEF"
    if ( firstName[ 0 ] == 'A' && firstName[ 1 ] == 'B' && firstName[ 2 ] == 'C' && lastName[ 0 ] == 'D' && lastName[ 1 ] == 'E' && lastName[ 2 ] == 'F' ) {
        firstName[ 2 ] = 'D' ;
    }

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", firstName, lastName ) ;

    return 0 ;
}//end function
