#include <stdio.h>

int main() {
    char firstName[ 100 ], lastName[ 100 ] ;

    // Input first name
    printf( "First Name: " ) ;
    scanf( "%s", &firstName );

    // Input last name
    printf( "Last Name: " ) ;
    scanf( "%s", &lastName ) ;

    printf( "%s %s TC, RMUTL, Chiang Mai, Thailand", firstName, lastName ) ;

    return 0 ;
}//end function
