#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
    /////////////////////////////////////////////
    struct student dummy ;
    // Test Case 1
    dummy.sex = 'M' ;
    dummy.gpa = 3.00 ;
    upgrade( &dummy ) ;
    printf( "Test Case 1 = %.2f\n", dummy.gpa ) ;
    // Test Case 2
    dummy.sex = 'F' ;
    dummy.gpa = 4.00 ;
    upgrade( &dummy ) ;
    printf( "Test Case 2 = %.2f\n", dummy.gpa ) ;
    // Test Case 3
    dummy.sex = 'M' ;
    dummy.gpa = 0.00 ;
    upgrade( &dummy ) ;
    printf( "Test Case 3 = %.2f\n", dummy.gpa ) ;
    // Test Case 4
    dummy.sex = 'M' ;
    dummy.gpa = 4.00 ;
    upgrade( &dummy ) ;
    printf( "Test Case 4 = %.2f\n", dummy.gpa ) ;
    // Test Case 5
    dummy.sex = 'O' ;
    dummy.gpa = 3.50 ;
    upgrade( &dummy ) ;
    printf( "Test Case 5 = %.2f\n", dummy.gpa ) ;
    // Test Case 6
    dummy.sex = 'F' ;
    dummy.gpa = 2.58 ;
    upgrade( &dummy ) ;
    printf( "Test Case 6 = %.2f\n", dummy.gpa ) ;
    /////////////////////////////////////////////

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
