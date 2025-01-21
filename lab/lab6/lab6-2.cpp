// Ref: https://github.com/tumrmutl/ENGCE117-Computer-Programming-for-Computer-Engineer/blob/main/lab/lab6.2.md
// Doc: https://drive.google.com/file/d/1RzmScF8xNYcJhM4bwAE2UvTeYasGMUWU/view

#ifdef __GNUC__
    #pragma GCC diagnostic ignored "-Wwrite-strings"
#endif

#include <stdio.h>
#include <string.h>

struct TaskNode {
    char taskName[ 50 ] ;
    char startDate[ 15 ] ;
    char endDate[ 15 ] ;
    char status[ 20 ] ;
    struct TaskNode *next ;
    struct TaskNode *back ;
} ;

void ShowAllTasks( struct TaskNode *walk ) ;
struct TaskNode* AddTask( struct TaskNode **start, char *taskName, char *startDate, char *endDate, char *status ) ;
void InsertTask( struct TaskNode *now, char *taskName, char *startDate, char *endDate, char *status ) ;
void DelTask( struct TaskNode *now ) ;
void SwapTasks( struct TaskNode *task1, struct TaskNode *task2 ) ;

int main() {
    struct TaskNode *start, *now ;
    start = NULL ;

    now = AddTask( &start, "Set up project", "2024-11-01", "2024-11-10", "Not Started" ) ;
    ShowAllTasks( start ) ;
    now = AddTask( &start, "Write code", "2024-11-11", "2024-11-20", "Not Started" ) ;
    ShowAllTasks( start ) ;

    InsertTask( now, "Research", "2024-11-05", "2024-11-10", "Not Started" ) ;
    ShowAllTasks( start ) ;

    SwapTasks( now, now->back ) ;  // Swap Write code and Research tasks
    ShowAllTasks( start ) ;

    DelTask( now->next ) ;  // Delete "Research" task
    ShowAllTasks( start ) ;

    return 0 ;
}//end function

void ShowAllTasks( struct TaskNode *walk ) {
    while ( walk != NULL ) {
        printf( "%s -> ", walk->taskName ) ;
        walk = walk->next ;
    }//end while
    printf("End\n") ;
}// end function

struct TaskNode* AddTask( struct TaskNode **start, char *taskName, char *startDate, char *endDate, char *status ) {
    struct TaskNode *tmp = NULL ;

    while( *start != NULL ) {
        tmp = *start ;
        start = &(*start)->next ;
    }//end while

    *start = new struct TaskNode ;
    strcpy( (*start)->taskName, taskName ) ;
    strcpy( (*start)->startDate, startDate ) ;
    strcpy( (*start)->endDate, endDate ) ;
    strcpy( (*start)->status, status ) ;
    (*start)->next = NULL ;
    (*start)->back = tmp ;

    return *start ;
}//end function

void InsertTask( struct TaskNode *now, char *taskName, char *startDate, char *endDate, char *status ) {
    if( now->back != NULL ) {
        now->back->next = new struct TaskNode ;
        strcpy( now->back->next->taskName, taskName ) ;
        strcpy( now->back->next->startDate, startDate ) ;
        strcpy( now->back->next->endDate, endDate ) ;
        strcpy( now->back->next->status, status ) ;
        now->back->next->next = now ;
        now->back->next->back = now->back ;
        now->back = now->back->next ;
    }//end if
}//end function

void DelTask( struct TaskNode *now ) {
    struct TaskNode *tmp ;
    now->back->next = now->next ;

    if( now->next != NULL ) {
        now->next->back = now->back ;
        tmp = now->next ;
    } else {
        tmp = now->back ;
    }//end if

    delete now ;
    now = tmp ;
}//end function

void SwapTasks( struct TaskNode *task1, struct TaskNode *task2 ) {
    task2 = task1->back->back->next ;
    task2->next = NULL ;
    task1->back->back->next = task1 ;
    task1->next = task2 ;
    task1->back = task1->back->back ;
    task2->back = task1->back->next ;
}//end function
