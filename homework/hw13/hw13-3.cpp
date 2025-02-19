#include <stdio.h>
#include <string.h>

void formatAndPrintSalary( float salary, char *formattedSalary ) ;

int main() {
    char name[ 50 ][ 50 ] ;  
    float salary[ 20 ] ;    
    float totalSalary = 0.0 ;
    float totalTax = 0.0 ;
    int taxMaxCount = 0 ;
    float taxMaxAmt = 0.0 ;
    int count = 0 ;

    while( true ) {
        printf( "Employee %d's Name: ", count + 1 ) ;
        scanf( "%s", name[ count ] ) ;
        
        if( strcmp( name[ count ], "-1" ) == 0 ) {
            break ;
        }//end if

        printf( "Salary (Bath/Month): " ) ;
        scanf( "%f", &salary[ count ] ) ;

        totalSalary += salary[ count ] ;
        float tax = salary[ count ] * 0.07 * 12 ; 
        totalTax += tax ;

        if( tax > taxMaxAmt ) {
            taxMaxAmt = tax ;
            taxMaxCount = count ;
        }//end if

        count++ ;
    }//end while

    if( count > 0 ) {
        float totalSalaryYear = totalSalary * 12 ;
        char formattedSalary[ 50 ] ;
        
        printf( "\nAll salary per month: " ) ;
        formatAndPrintSalary( totalSalary, formattedSalary ) ;

        printf( "\nAll salary per year: " ) ;
        formatAndPrintSalary( totalSalaryYear, formattedSalary ) ;

        printf( "\nTax (7%% per year) : " ) ;
        formatAndPrintSalary( totalTax, formattedSalary ) ;

        printf( "\nMost tax in company : %s (", name[ taxMaxCount ] ) ;
        formatAndPrintSalary( taxMaxAmt, formattedSalary ) ;
        printf( " per year)\n" ) ;
    } else {
        printf( "No employee data entered.\n" ) ;
    }//end if

    return 0 ;
}//end function

void formatAndPrintSalary( float salary, char *formattedSalary ) {
    char result_str[ 20 ] ;
    sprintf( result_str, "%.2f", salary ) ; 

    int len = strlen( result_str ) ;
    int j = 0 ;
    
    for ( int i = 0 ; i < len ; i++ ) {
        if( result_str[ i ] == '.' ) {
            formattedSalary[ j++ ] = result_str[ i ] ; 
            break ;
        }
        formattedSalary[ j++ ] = result_str[ i ] ;  
    }//end for
    
    for( int i = 0 ; i < len - 3 ; i++ ) {  
        if( i != 0 && ( len - i ) % 3 == 0 ) {
            printf( "," ) ;  
        }
        printf( "%c", result_str[ i ] ) ;
    }//end for

    printf( "%s Bath", strchr( result_str, '.' ) ) ;  

    formattedSalary[ j ] = '\0' ;  
}//end function
