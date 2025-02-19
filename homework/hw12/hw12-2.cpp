#include <stdio.h>

struct Student {
    char Name[ 20 ] ;
    float Score ;
} ;

void swap( struct Student *a, struct Student *b ) ;

int main() {
    struct Student students[ 4 ] ; // อาเรย์สำหรับเก็บข้อมูลนักเรียน 4 คน
    int maxIndex ;

    for(int i = 0 ; i < 4 ; i++ ) {
        printf( "Student %c\n", 'A' + i ) ;
        printf( "Name : " ) ;
        scanf( "%s", students[ i ].Name ) ;
        printf( "Score : " ) ;
        scanf( "%f", &students[ i ].Score ) ;
        printf( "\n" ) ;
    }

    for( int i = 0 ; i < 4 - 1 ; i++ ) {
        maxIndex = i ; 
        for( int j = i + 1 ; j < 4 ; j++ ) {
            if(students[ j ].Score > students[ maxIndex ].Score ) {
                maxIndex = j ; 
            }
        }
        if( maxIndex != i )  {
            swap( &students[ i ], &students[ maxIndex ] ) ; 
        }
    }

    for( int i = 0 ; i < 4 ; i++ ) {
        printf( "%s ", students[ i ].Name ) ; 
    }
    printf( "\n" ) ;

    for( int i = 0 ; i < 4 ; i++ ) {
        printf( "%.2f ", students[ i ].Score ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}

void swap( struct Student *a, struct Student *b ) {
    struct Student temp = *a ;
    *a = *b ;
    *b = temp ;
}