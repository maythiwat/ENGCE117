#include <stdio.h>

int main() {
    FILE *fp ;

    fp = fopen( "a15-2.txt", "r" ) ;  
    if( fp == NULL ) {
        printf( "Error: Unable to open file!\n" ) ;
        return 0 ; 
    }//end if

    int n1, n2 ;
    fscanf( fp , "%d" , &n1 ) ;
    printf( "Input vale from user to B : " ) ;
    scanf( "%d" , &n2 ) ;
    printf( "Output:\nRead File to A is %d\n" , n1 ) ;
    printf( "Input value from user is %d\n" , n2 ) ;
    printf( "Answer = %d" , n1 + n2 ) ;

    return 0 ;
}//end function
