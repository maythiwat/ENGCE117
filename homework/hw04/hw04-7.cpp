#include <stdio.h>

int main() {
    int celDeg ;
    printf( "User input : " ) ;
    scanf( "%d", &celDeg ) ;

    float fahDeg = ( celDeg * 1.8 ) + 32 ;
    printf( "%d degree Celsius = %.1f degree Fahrenheit", celDeg, fahDeg ) ;

    return 0 ;
}//end function
