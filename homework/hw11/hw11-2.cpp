#include <stdio.h>

void swap( int *a, int *b ) ;

int main() {
    char nameA[ 100 ], nameB[ 100 ] ;
    int ageA, ageB ;

    printf( "Input A\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s", &nameA ) ;
    printf( "Age : " ) ;
    scanf( "%d", &ageA ) ;

    printf( "Input B\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s", &nameB ) ;
    printf( "Age : " ) ;
    scanf( "%d", &ageB ) ;

    printf( "** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n", nameA, ageA ) ;
    printf( "Name: %s (%d)\n", nameB, ageB ) ;

    swap( &ageA, &ageB ) ;

    printf( "\n** SWAP AGE **\n" ) ;
    printf( "Name: %s (%d)\n", nameA, ageA ) ;
    printf( "Name: %s (%d)\n", nameB, ageB ) ;

    return 0 ;
}//end function

void swap( int *a, int *b ) {
    int tmp = *a ;
    *a = *b ;
    *b = tmp ;
}//end function
