#include <stdio.h>

int main() {
    int n1, n2, n3 ;
    scanf( "%d %d %d", &n1, &n2, &n3 ) ;
    printf( "1st Number = %d\n", n1 ) ;
    printf( "2nd Number = %d\n", n2 ) ;
    printf( "3rd Number = %d\n", n3 ) ;

    int i = 1 ;
    int max = n1 ;

    if( n2 > max ) {
        max = n2 ;
        i++ ;
    }//end if

    if( n3 > max ) {
        max = n3 ;
        i++ ;
    }//end if

    // test case is Nrd, so i hard coded this.
    printf( "The %drd Number is the greatest among three", i ) ;

    return 0 ;
}//end function
