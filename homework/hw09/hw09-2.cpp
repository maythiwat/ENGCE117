#include <stdio.h>

int main() {
    int n, cur = 0 ;
    int arr[30] ;

    while (n != -1) {
        printf( "Enter value n : " ) ;
        scanf( "%d", &n ) ;
        if( n != -1 ) {
            arr[cur] = n ;
            cur++ ;
        }//end if
    }//end while

    int tmp ;
    for ( int i = 0 ; i < cur ; i++ ) {
        for ( int j = 0 ; j < cur ; j++ ) {
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }//end for

    printf("0-99 :");
    for ( int i = 0 ; i < cur ; i++ ) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    for ( int i = 0 ; i < cur ; i++ ) {
        for ( int j = 0 ; j < cur ; j++ ) {
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }//end for

    printf("99-0 :");
    for ( int i = 0 ; i < cur ; i++ ) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0 ;
}// end function
