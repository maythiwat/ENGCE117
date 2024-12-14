#include <stdio.h>

int main() {
    int n1, n2 ;
    printf( "Input 1 : " ) ;
    scanf( "%d", &n1 ) ;
    printf( "Input 2 : " ) ;
    scanf( "%d", &n2 ) ;

    if( n1 == n2 ) {
        printf( "Number1 equal Number2" ) ;
    } else if( n1 > n2 ) {
        printf( "Number1 greater than Number2" ) ;
    } else {
        printf( "Number1 lower than Number2" ) ;
    }//end if

    return 0 ;
}//end function
