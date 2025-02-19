#include <stdio.h>
#include <string.h>

struct Employee {
    char name[ 50 ] ;
    float salary ;
} ;

void formatAndPrintSalary( float salary ) ;

int main() {
    struct Employee employees[ 100 ] ;  
    int count = 0 ;
    float totalSalary = 0.0 ;
    int highestTaxIndex = 0 ;

    do {
        printf( "Employee %d's Name : ", count + 1 ) ;
        scanf( "%s", employees[ count ].name ) ;

        if( strcmp( employees[ count ].name, "-1" ) == 0 ) break ;

        printf( "Salary (Bath/Month) : " ) ;
        scanf( "%f", &employees[ count ].salary ) ;
        totalSalary += employees[ count ].salary ;

        if( employees[ count ].salary > employees[ highestTaxIndex ].salary ) {
            highestTaxIndex = count ;
        }
        count++ ;
    } while( true ) ;

    if( count > 0 ) {
        float totalSalaryYear = totalSalary * 12 ;
        float totalTax = totalSalaryYear * 0.07 ;
        float highestTax = employees[ highestTaxIndex ].salary * 12 * 0.07 ;

        printf( "\nAll salary per month: " ) ;
        formatAndPrintSalary( totalSalary ) ;
        printf( "\n" ) ;

        printf( "All salary per year: " ) ;
        formatAndPrintSalary( totalSalaryYear ) ;
        printf( "\n" ) ;

        printf( "Tax (7%% per year) : " ) ;
        formatAndPrintSalary( totalTax ) ;
        printf( "\n" ) ;

        printf( "Most tax in company : %s (", employees[ highestTaxIndex ].name ) ;
        formatAndPrintSalary( highestTax ) ;
        printf( " per year)\n" ) ;
    } else {
        printf( "No employee data entered.\n" ) ;
    }

    return 0 ;
}

void formatAndPrintSalary( float salary ) {
    char result_str[ 20 ] ;
    sprintf( result_str, "%.2f", salary ) ;  

    int len = strlen( result_str ) ;

    for( int i = 0; i < len - 3 ; i++ ) {  
        if( i != 0 && ( len - i ) % 3 == 0 ) {
            printf( "," ) ;  
        }
        printf( "%c", result_str[ i ] ) ;
    }

    printf( "%s Bath", strchr( result_str, '.' ) ) ;  
}