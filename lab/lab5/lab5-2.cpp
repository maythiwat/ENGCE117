// Ref: https://github.com/tumrmutl/ENGCE117-Computer-Programming-for-Computer-Engineer/blob/main/lab/lab5.2.md
// Doc: https://drive.google.com/file/d/1ZcFdmTMI1vKCsJO_nyH5buy5gmMRxDAy/view

#ifdef __GNUC__
    #pragma GCC diagnostic ignored "-Wwrite-strings"
#endif

#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void ShowAll( struct studentNode **walk ) ;
struct studentNode *AddNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) ;
void InsNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) ;
void DelNode( struct studentNode **walk ) ;
void GoNext( struct studentNode ***walk ) ;

int main() {
    struct studentNode *start, **now ;
    start = NULL ; now = &start ;
    InsNode( now, "one", 6, 'M', 3.11 ) ; ShowAll( &start ) ;
    InsNode( now, "two", 8, 'F', 3.22 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( &start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    DelNode( now ) ; ShowAll( &start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode **walk ) {
    while( *walk != NULL ) {
        printf( "%s ", (*walk)->name ) ;
        walk = &(*walk)->next ;
    }//end while
    printf( "\n" ) ;
}//end function

void GoNext( struct studentNode ***walk ) {
    if ( (**walk)->next != NULL ) {
        *walk = &(**walk)->next ;
    }//end if
}//end function

void InsNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) {
    struct studentNode *tmp = new struct studentNode ;
    strcpy( tmp->name, name ) ;
    tmp->age = age ;
    tmp->sex = sex ;
    tmp->gpa = gpa ;

    tmp->next = *walk ;
    *walk = tmp ;
}//end function

void DelNode( struct studentNode **walk ) {
    struct studentNode *tmp = new struct studentNode ;
    tmp = (*walk)->next->next ;
    (*walk)->next = tmp ;
}//end function
