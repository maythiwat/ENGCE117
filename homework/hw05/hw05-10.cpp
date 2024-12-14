#include <stdio.h>

int main() {
    int score ;
    printf( "enter score : " ) ;
    scanf( "%d", &score ) ;

    switch( score / 5 ) {
        case 10:  
            printf( "D !" ) ;
            break ;
        case 11:  
            printf( "D+ !" ) ;
            break ;
        case 12:  
            printf( "C !" ) ;
            break ;
        case 13:  
            printf( "C+ !" ) ;
            break ;
        case 14:  
            printf( "B !" ) ;
            break ;
        case 15:  
            printf( "B+ !" ) ;
            break ;
        case 16:  
        case 17:  
        case 18:  
        case 19:  
        case 20:  
            printf( "A !" ) ;
            break ;
        default:
            printf( "F !" ) ;
            break ;
    }//end switch

    return 0 ;
}//end function
