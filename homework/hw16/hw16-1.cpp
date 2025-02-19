#include <stdio.h>

int SequentialSearch( int data[], int n, int find ) ;

int main() {
    int RealData[ 6 ] = { 7, 4, 1, 8, 3, 2 } ;
    printf( "Found in %d\n", SequentialSearch( RealData, 6, 8 ) ) ;
    return 0 ;
}//end function

int SequentialSearch( int data[], int n, int find ) {
    int Output = -1 ;
    for( int i = 0 ; i < n ; i++ ) {
        if( data[ i ] == find ) {
            Output = i ; 
            break ; 
        }//end if
    }//end for
    return Output ;
}//end function
