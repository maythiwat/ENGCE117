#include <stdio.h>

int main() {
    int n ;
    printf("Enter number : ") ;
    scanf( "%d", &n ) ;

    int sum = 0 ;
    int current = 9 ; // initial value

    int i = 1 ;
    do {
        sum += current ;

        printf( "%d", current ) ;

        if( i < n ) {
            printf( " + " ) ;
        }//end if

        current = current * 10 + 9 ;

        i++ ;
    } while ( i <= n ) ;
 
    printf( "\nSum = %d ", sum ) ;

    return 0 ;
}//end function
