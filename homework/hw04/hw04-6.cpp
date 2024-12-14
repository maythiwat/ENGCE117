#include <stdio.h>
#include <string.h>

int main() {
    char employeeId[ 11 ] ;
    int hours, amount ;

    // input
    printf( "Enter Employee ID(Max. 10 chars): " ) ;
    scanf( "%s", employeeId ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &hours ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%d", &amount ) ;

    float salary = hours * amount ;

    printf( "Expected Output:\n" ) ;
    printf( "Employees ID = %s\n", employeeId ) ;
    printf( "Salary = U$ " ) ;

    char salaryStr[ 12 ] ; // salary limit is 999999999.99 :P
    sprintf( salaryStr, "%.2f", salary ) ; // convert number to string
    int len = strlen( salaryStr ) ;

    for ( int i = 0 ; i < len - 3 ; i++ ) {
        if ( i > 0 && ( len - i ) % 3 == 0 ) {
            printf( "," ) ;
        }//end if

        printf( "%c", salaryStr[ i ] ) ;
    }//end for

    // print decimal points (from dot to end)
    printf( "%s",  strchr( salaryStr, '.' ) ) ;

    return 0 ;
}//end function
