#include <stdio.h>
#include <string.h>

struct Employee {
    char name[ 50 ] ;
    float exp ;
    float salaryMul ;
};

int main() {
    struct Employee employees[ 100 ] ;
    int count = 0 ;
    char name_I[ 50 ] ;

    int multiplierCount[ 6 ] = { 0 } ;

    int maxIndex = 0, minIndex = 0 ;

    while( true ) {
        printf( "Employee %d Name : ", count + 1 ) ;
        scanf( "%s", name_I ) ;

        if( strcmp( name_I, "-1" ) == 0 ) break ; 

        strcpy( employees[ count ].name, name_I ) ;

        printf( "EXP : " ) ;
        scanf( "%f", &employees[ count ].exp ) ;

        if( employees[ count ].exp < 1000 ) {
            employees[ count ].salaryMul = 1.0 ;
            multiplierCount[ 0 ]++ ; 
        } else if( employees[ count ].exp < 2000 ) {
            employees[ count ].salaryMul = 1.2 ;
            multiplierCount[ 1 ]++ ; 
        } else if( employees[ count ].exp < 3000 ) {
            employees[ count ].salaryMul = 1.4 ;
            multiplierCount[ 2 ]++ ; 
        } else if( employees[ count ].exp < 4000 ) {
            employees[ count ].salaryMul = 1.6 ;
            multiplierCount[ 3 ]++ ; 
        } else if( employees[ count ].exp < 5000 ) {
            employees[ count ].salaryMul = 1.8 ;
            multiplierCount[ 4 ]++ ; 
        } else {
            employees[ count ].salaryMul = 2.0;
            multiplierCount[ 5 ]++ ; 
        }

        if( employees[ count ].salaryMul > employees[ maxIndex ].salaryMul ) {
            maxIndex = count ;
        }
        if( employees[ count ].salaryMul < employees[ minIndex ].salaryMul ) {
            minIndex = count ;
        }
        count++ ;
    }

    printf( "\n" ) ;
    printf( "**** Salary Result ****\n" ) ;
    printf( "x1.0 count %d\n", multiplierCount[ 0 ] ) ;
    printf( "x1.2 count %d\n", multiplierCount[ 1 ] ) ;
    printf( "x1.4 count %d\n", multiplierCount[ 2 ] ) ;
    printf( "x1.6 count %d\n", multiplierCount[ 3 ] ) ;
    printf( "x1.8 count %d\n", multiplierCount[ 4 ] ) ;
    printf( "x2.0 count %d\n", multiplierCount[ 5 ] ) ;
    printf( "The Employee get x2.0 is %s\n", employees[ maxIndex ].name ) ;
    printf( "The Employee get x1.0 is %s\n", employees[ minIndex ].name ) ;

    return 0 ;
}