// Ref: https://github.com/tumrmutl/ENGCE117-Computer-Programming-for-Computer-Engineer/blob/main/lab/lab6.1.md
// Doc: https://drive.google.com/file/d/1RzmScF8xNYcJhM4bwAE2UvTeYasGMUWU/view

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
    struct studentNode *back ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) ;
void InsNode( struct studentNode *walk, char name[], int age, char sex, float gpa, struct studentNode **begin ) ;
void DelNode( struct studentNode **walk, struct studentNode **begin ) ;
void GoBack( struct studentNode **walk ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33, &start ) ; ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44, &start ) ; ShowAll( start ) ;
    GoBack( &now ) ;
    DelNode( &now, &start ) ; ShowAll( start ) ;
    DelNode( &now, &start ) ; ShowAll( start ) ;
    DelNode( &now, &start ) ; ShowAll( start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while
    printf( "\n" ) ;
}//end function

struct studentNode *AddNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) {
    struct studentNode *tmp = NULL ;

    while( *walk != NULL ) {
        tmp = *walk ;
        walk = &(*walk)->next ;
    }//end while

    // printf("*** tmp of %s is %s\n", (*walk)->name, tmp->name) ;

    *walk = new struct studentNode ;
    strcpy( (*walk)->name, name ) ;
    (*walk)->age = age ;
    (*walk)->sex = sex ;
    (*walk)->gpa = gpa ;
    (*walk)->next = NULL ;
    (*walk)->back = tmp ;

    // printf("*** new node is %s (%p)\n", (*walk)->name, *walk) ;
    return *walk ;
}//end function

void InsNode( struct studentNode *walk, char name[], int age, char sex, float gpa, struct studentNode **begin ) {
    if( walk->back != NULL ) {
        walk->back->next = new struct studentNode ;
        strcpy( walk->back->next->name, name ) ;
        walk->back->next->age = age ;
        walk->back->next->sex = sex ;
        walk->back->next->gpa = gpa ;
        walk->back->next->next = walk ;
        walk->back->next->back = walk->back ;
        walk->back = walk->back->next ;
        // printf("*** insnode (%s, %p) -> %s (%p)\n", walk->back->name, walk->back, walk->name, walk);
    }else{
        *begin = new struct studentNode ;
        (*begin)->age = age ;
        (*begin)->sex = sex ;
        (*begin)->gpa = gpa ;
        (*begin)->next = walk ;
        (*begin)->next = NULL ;
        walk->back = *begin ;
        // printf("*** insnode (%s, %p) -> %s (%p)\n", (*begin)->name, *begin);
    }//end if
}//end function

void GoBack( struct studentNode **walk ) {
    if ( (*walk)->back != NULL ) {
        *walk = (*walk)->back ;
        // printf("*** goback -> %s (%p)\n", (*walk)->name, *walk);
    }//end if
}//end function

void DelNode( struct studentNode **walk, struct studentNode **begin ) {
    struct studentNode *tmp ;

    if( (*walk)->back != NULL ) {
        (*walk)->back->next = (*walk)->next ;
    } else {
        *begin = (*walk)->next ;
    }//end if

    if( (*walk)->next != NULL ) {
        (*walk)->next->back = (*walk)->back ;
        tmp = (*walk)->next ;
    } else {
        tmp = (*walk)->back ;
    }//end if

    delete *walk ;
    *walk = tmp ;
    // printf("*** delnode -> %s\n", (*walk)->name);
}//end function
