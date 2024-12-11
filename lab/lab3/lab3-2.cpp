#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    upgrade( &aboy ) ;
    printf( "%.2f", aboy.gpa ) ;

    return 0 ;
}//end function

void upgrade( struct student *child ) {
    if ( child->gpa >= 4.00 ) {
        child->gpa = 4.00 ;
        return ;
    } else if ( child->gpa <= 0.00 ) {
        child->gpa = 0.00 ;
        return ;
    }//end if

    if ( child->sex == 'M' ) {
        child->gpa += ( child->gpa * 0.1 ) ;
    } else if ( child->sex == 'F' ) {
        child->gpa += ( child->gpa * 0.2 ) ;
    }//end if

    printf( "GPA inside upgrade = %.2f\n", child->gpa ) ;
}//end function
