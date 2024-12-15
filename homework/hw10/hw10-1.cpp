#include <stdio.h>

int main() {
    char fullName[ 100 ] ;

    // replacement for gets()
    fgets( fullName, 100, stdin ) ;

    printf( "Name: %s", fullName ) ;

    return 0 ;
}//end function
