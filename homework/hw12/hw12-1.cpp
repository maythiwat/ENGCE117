#include <stdio.h>

struct Person {
    char Name[ 20 ] ;
    int Age ;
    char Sex ; 
    float Score ;
} ;

int main() {
    struct Person A, B ;

    printf( "Person A\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s", A.Name ) ;
    printf( "Age : " ) ;
    scanf( "%d", &A.Age ) ;
    printf( "Sex : " ) ;
    scanf( " %c", &A.Sex ) ; 
    printf( "Score : " ) ;
    scanf( "%f", &A.Score ) ;

    printf( "\nPerson B\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s", B.Name ) ;
    printf( "Age : " ) ;
    scanf( "%d", &B.Age ) ;
    printf( "Sex : " ) ;
    scanf( " %c", &B.Sex ) ;
    printf( "Score : " ) ;
    scanf( "%f", &B.Score ) ;

    printf( "\n--| Person A Information |--\n" ) ;
    printf( "Name : %s (%c)\n", A.Name, A.Sex ) ;
    printf( "Age : %d years old\n", A.Age ) ;
    printf( "Score : %.2f points\n", A.Score ) ;

    printf( "\n--| Person B Information |--\n" ) ;
    printf( "Name : %s (%c)\n", B.Name, B.Sex ) ;
    printf( "Age : %d years old\n", B.Age ) ;
    printf( "Score : %.2f points\n", B.Score ) ;

    return 0 ;
}
