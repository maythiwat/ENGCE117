#include <stdio.h>

int main() {
    int tmp, n1, n2, n3 ;

    printf( "Input[1] : " ) ;
    scanf( "%d", &n1 ) ;
    printf( "Input[2] : " ) ;
    scanf( "%d", &n2 ) ;
    printf( "Input[3] : " ) ;
    scanf( "%d", &n3 ) ;

    if( n1 < n2 ) {
        tmp = n1 ;
        n1 = n2 ;
        n2 = tmp ;
    }//end if

    if( n1 < n3 ) {
        tmp = n1 ;
        n1 = n3 ;
        n3 = tmp ;
    }//end if

    if( n2 < n3 ) {
        tmp = n2 ;
        n2 = n3 ;
        n3 = tmp ;
    }//end if

    printf( "%d %d %d\n", n1, n2, n3 ) ;

    return 0 ;
}//end function
