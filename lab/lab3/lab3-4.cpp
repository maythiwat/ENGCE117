#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    for ( int i = 0 ; i < group ; i++ ) {
        printf( "Room %d: 10 students entered.\n", i + 1 ) ;
    }//end for
    return 0 ;
}//end function

void GetStudent(student child[][10], int *room) {
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
    // for ( int i = 0 ; i < ( *room ) ; i++ ) {
    //     for ( int j = 0 ; j < 10 ; j++ ) {
    //         printf( "child %d of room %d: name=%s age=%d\n", j + 1, i + 1, child[ i ][ j ].name, child[ i ][ j ].age ) ;
    //     }
    // }
}//end function
