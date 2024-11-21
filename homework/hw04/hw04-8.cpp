#include <stdio.h>

int main() {
    int n, r ;

    scanf( "%x", &n ) ;

    int b = 0 ;
    int mul = 1 ;
    while( n != 0 ) {
        r = n % 2 ;
        b = b + ( r * mul ) ;
        mul = mul * 10 ;
        n = n / 2 ;
    }//end while

    printf( "%d", b ) ;

    return 0 ;
}//end function
