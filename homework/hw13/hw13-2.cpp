#include <stdio.h>
#include <string.h>

void reverse( char *str ) ;

int main() {
    char str[ 50 ] ;
    fgets( str, 50, stdin ) ; 
    
    reverse( str ) ;
    printf( "%s\n", str ) ;
    return 0 ;
}//end function

void reverse( char *str ) {
    char *start = str ;        
    char *end = str + strlen( str ) - 1; 
    char temp ;                 

    while( start < end ) {
        temp = *start ;
        *start = *end ;
        *end = temp ;
        start++ ;
        end-- ;
    }//end while
}//end function