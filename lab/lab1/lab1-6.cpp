#include <stdio.h>

int* GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;

    // null = incorrect number
    if ( data == NULL ) {
        printf( "Error: Invalid matrix input" ) ;
        return 0 ;
    }//end if

    // print out matrix
    printf( "Enter number of rows and columns: %d %d \n", m, n ) ;

    if ( m && n ) {
        printf( "Enter matrix elements: \n" ) ;
        for( int i = 0 ; i < m ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                printf( "%d ", data[ i * n + j ] ) ;
            }//end for

            // line break on new row
            printf("\n") ;
        }//end for
    }//end if

    return 0 ;
}//end function

int* GetMatrix( int *row, int *col ) {
    scanf( "%d", row ) ;
    scanf( "%d", col ) ;

    int size = ( *row ) * ( *col ) ;
    int *tmp ;
    tmp = new int[ size ] ;

    for ( int i = 0 ; i < ( *row ) ; i++ ) {
        if (tmp == NULL) {
            break ;
        }//end if

        for ( int j = 0 ; j < ( *col ) ; j++ ) {
            int idx = i * ( *col ) + j ;

            scanf( "%d", &tmp[ idx ] ) ;

            // handle line break
            if ( getchar() == '\n' ) {
                // if is last row AND current index is not end
                if ( i == ( *row - 1 ) && idx < ( size - 1 ) ) {
                    // dirty way to told is it error or not
                    tmp = NULL ;
                }//end if

                break ;
            }//end if
        }//end for
    }//end for

    return tmp ;
}//end function
