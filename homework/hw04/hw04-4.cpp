#include <stdio.h>

int main() {
    float h, w, area ;

    printf( "Enter H & W : " ) ;
    scanf( "%f %f", &h, &w ) ;

    area = ( w * h ) / 2 ;
    printf( "Triagle Area : %.1f", area ) ;

    return 0 ;
}//end function
