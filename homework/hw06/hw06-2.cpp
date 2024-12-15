#include <stdio.h>

int main() {
    // roman numerics
    char romanChar[][3] = { "M", "CM", "D" , "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" } ;
    int romanWeight[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 } ;

    int num = 0 ;
    scanf( "%d" , &num ) ;

    printf( "%d = ", num ) ;

    // loop through all roman
    for ( int i = 0 ; i < 13 ; i++ ) {
        // print by char index and decrese by weight until 0
        for ( ; num >= romanWeight[i] ; num -= romanWeight[i] ) {
            printf( "%s", romanChar[i] ) ;
        }//end for
    }//end for

    return 0 ;
}//end function
