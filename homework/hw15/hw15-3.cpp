#include <stdio.h>

int main() {
    FILE *fp ;

    fp = fopen( "a15-3.txt", "r" ) ;  
    if( fp == NULL ) {
        printf( "Error: Unable to open file!\n" ) ;
        return 0 ; 
    }

    float gpa, age ;
    char name[ 20 ], sex[ 20 ] ;

    while ( fscanf( fp , "%s %f %f %s" , name , &age , &gpa , sex ) != EOF ) {
        printf( "%s  %.0f  %.2f  %s\n" , name , age , gpa , sex ) ;
    }//end while

    return 0 ;
}//end function
