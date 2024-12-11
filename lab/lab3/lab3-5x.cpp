#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
} ;

void GetStudent( struct student std[][10] , int *room );

int main() {
    struct student children[30][10] ;
    int group ;
    GetStudent( children, &group ) ;
    for ( int i = 0 ; i < group ; i++ ) {
        printf( "Room %d: 10 students entered.\n", i + 1 ) ;
    }//end for

    // print whole shits here just for testing (passed into here, i think)
    for ( int i = 0 ; i < group ; i++ ) {
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "@main child %d of room %d: name=%s age=%d\n", j + 1, i + 1, children[ i ][ j ].name, children[ i ][ j ].age ) ;
        }
    }
    return 0 ;
}//end function

void GetStudent( struct student child[][10] , int *room ) {
    // input room
    scanf( "%d", room ) ;

    for ( int i = 0 ; i < ( *room ) ; i++ ) {
        printf( "Room %d: \n", i + 1 ) ;

        // input 10 students
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: ", j + 1 ) ;
            scanf( "%s %d", &child[ i ][ j ].name, &child[ i ][ j ].age ) ;
        }

        printf( "----------------------------------------\n" ) ;
    }//end for

    // print whole shits here just for testing
    for ( int i = 0 ; i < ( *room ) ; i++ ) {
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "@func child %d of room %d: name=%s age=%d\n", j + 1, i + 1, child[ i ][ j ].name, child[ i ][ j ].age ) ;
        }
    }
}
