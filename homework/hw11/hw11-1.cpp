#include <stdio.h>

int add( int a, int b, int c ) ;

int main() {
    int a, b, c ;

    printf( "Input 1 : " ) ;
    scanf( "%d", &a ) ;
    printf( "Input 2 : " ) ;
    scanf( "%d", &b ) ;
    printf( "Input 3 : " ) ;
    scanf( "%d", &c ) ;

    printf( "Summation = %d (Calculate by add() Function)", add( a, b, c ) ) ;

    return 0 ;
}//end function

int add( int a, int b, int c ) {
    return a + b + c ;
}//end function
