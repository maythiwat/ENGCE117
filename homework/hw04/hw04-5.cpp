#include <stdio.h>

int main() {
    int days ;
    printf( "Input Days : " ) ;
    scanf( "%d", &days ) ;

    int seconds = days * 86400 ;
    printf( "%d days = %d seconds", days, seconds ) ;

    return 0 ;
}//end function
