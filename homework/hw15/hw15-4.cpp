#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp ;
    char name[ 50 ], maxName[ 50 ] ;
    float grade, maxGrade = 0.0 ;
    int age ;
    char sex[ 10 ] ;

    fp = fopen( "a15-4.txt", "r" ) ;  
    if( fp == NULL ) {
        printf( "Error: Unable to open file!\n" ) ;
        return 0 ; 
    }

    while( fscanf( fp, "%s %d %f %s", name, &age, &grade, sex ) != EOF ) {
        if( grade > maxGrade ) {
            maxGrade = grade ;
            strcpy( maxName, name ) ;
        }
    }

    fclose( fp ) ;
    printf( "%s, Grade %.2f\n", maxName, maxGrade ) ;

    return 0 ;
}//end function