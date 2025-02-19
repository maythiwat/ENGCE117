#include <stdio.h>
#include <string.h>

struct Employee {
    char name[ 50 ] ;
    float salary ;
    int duration ;  
} ;

void PrintFormattedSalary( float salary ) ;

int main() {
    struct Employee employees[ 100 ] ;  
    int count = 0 ;
    char choice ;
    float totalSalary = 0.0 ;
    int mostDurationIndex = 0 ;

    do {
        printf( "Do you want to Enter Employee Information? (y/n) : " ) ;
        scanf( " %c", &choice ) ;  

        if( choice == 'y' || choice == 'Y' ) {
            printf( "----\n" ) ;
            printf( "Employee Name : " ) ;
            scanf( "%s", employees[ count ].name ) ;
            printf( "Salary (Bath/Month) : " ) ;
            scanf( "%f", &employees[ count ].salary ) ;
            printf( "Duration (Year) : " ) ;
            scanf( "%d", &employees[ count ].duration ) ;
            totalSalary += employees[ count ].salary ;

            if( employees[ count ].duration > employees[ mostDurationIndex ].duration ) {
                mostDurationIndex = count ;
            }
            count++ ;
        }

    } while( choice == 'y' || choice == 'Y' ) ;

    if( count > 0 ) {
        float averageSalary = totalSalary / count ;
        float totalPayment = totalSalary ;

        printf( "\n" ) ;
        printf( "Average of Salary : " ) ;
        PrintFormattedSalary( averageSalary ) ;
        printf( "\n" ) ;

        printf( "Payment of every month : " ) ;
        PrintFormattedSalary( totalPayment ) ;
        printf( "\n" ) ;

        printf( "----------------------------------------\n" ) ;
        printf( "** Most duration in this business **\n" ) ;
        printf( "Name : %s (%d Years)\n", employees[ mostDurationIndex ].name, employees[ mostDurationIndex ].duration ) ;
        printf( "Salary : " ) ;
        PrintFormattedSalary( employees[ mostDurationIndex ].salary ) ;
        printf("\n");

    } else {
        printf( "No employee data entered.\n" ) ;
    }

    return 0 ;
}

void PrintFormattedSalary( float salary ) {
    char str[ 50 ] ;
    sprintf( str, "%.2f", salary ) ;

    int len = strlen( str ) ;
    
    for( int i = 0 ; i < len - 3 ; i++ ) {
        if( i != 0 && ( len - i ) % 3 == 0 ) {
            printf( "," ) ;
        }
        printf( "%c", str[ i ] ) ;
    }
    printf( "%s Bath", strchr( str, '.' ) ) ;  
}
