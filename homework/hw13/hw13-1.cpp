#include <stdio.h>

void swapAges( int *ageA, int *ageB ) ;

int main() {
    char nameA[ 50 ], nameB[ 50 ] ;
    int ageA, ageB ;

    printf( "Input A\n" ) ;
    printf( "Name: " ) ;
    scanf( "%s", nameA ) ;
    printf( "Age: " ) ;
    scanf( "%d", &ageA ) ;
    
    printf( "Input B\n" ) ;
    printf( "Name: " ) ;
    scanf( "%s", nameB ) ;
    printf( "Age: " ) ;
    scanf( "%d", &ageB ) ;
    
    printf( "\n** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n", nameA, ageA ) ;
    printf( "Name: %s (%d)\n", nameB, ageB ) ;

    swapAges( &ageA, &ageB ) ;

    printf( "\n** SWAP AGE **\n" ) ;
    printf( "Name: %s (%d)\n", nameA, ageA ) ;
    printf( "Name: %s (%d)\n", nameB, ageB ) ;
    return 0 ;
}//end function

void swapAges( int *ageA, int *ageB ) {
    int temp = *ageA ;
    *ageA = *ageB ;
    *ageB = temp ;
}//end function

