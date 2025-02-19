#include <stdio.h>

int main() {
    char ans ;

    printf( "Post a job \n" ) ;
    printf( "There are customers? (y/n) : " ) ;
    scanf( " %c", &ans ) ;

    while( ans != 'y' ) {
        printf( "Post a job \n" ) ;
        printf( "There are customers? (y/n) : " ) ;
        scanf( " %c", &ans ) ;
    }//end while

    printf( "Talk about work \n" ) ; //คุยงาน
    printf( "Customers are interested in hiring? (y/n) : " ) ;
    scanf( " %c", &ans ) ;

    while( ans != 'y' ) {
        printf( "Post a job \n" ) ;
        printf( "There are customers? (y/n) : " ) ;
        scanf( " %c", &ans ) ;
    }//end while

    printf( "Employment contract \n" ) ;
    printf( "Pay a deposit \n" ) ;
    printf( "Work and report progress \n" ) ;
    printf( "Finished work? (y/n) : " ) ;
    scanf( " %c", &ans ) ;

    if( ans == 'y' ) {
        printf( "Pay the remaining amount \n" ) ;
        printf( "Receive money $$$ \n" ) ;
    } else {
        printf( "Refund of deposit \n" ) ;
    }//end if

    return 0 ;
}//end function
