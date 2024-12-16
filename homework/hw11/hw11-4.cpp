#include <stdio.h>

int sum_of_series( int n ) ;

int main() {
    int n;
    scanf( "%d", &n ) ;

    printf( "Sum = %d", sum_of_series( n ) ) ;

    return 0 ;
}//end function

int sum_of_series( int n ) {
    int sum = 1, fact = 1 ;

    for( int i = 2 ; i <= n ; i++ ) {
        fact = fact * i ;
        sum += fact + ( i - 1 ) ;
    }//end for

    return sum ;
}//end function
