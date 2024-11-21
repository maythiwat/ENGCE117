#include <stdio.h>

int main() {
    int a1, a2, b1, b2 ;
    printf( "Input A Point: " ) ;
    scanf( "%d %d", &a1, &a2 ) ;
    printf( "Input B Point: " ) ;
    scanf( "%d %d", &b1, &b2 ) ;

    // midpoint = ( a + b ) / 2
    float mp1 = ( a1 + b1 ) / 2 ;
    float mp2 = ( a2 + b2 ) / 2 ;
    printf( "%.1f %.1f", mp1, mp2 ) ;

    return 0 ;
}//end function
