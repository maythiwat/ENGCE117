#include <stdio.h>

int main()
{
  char fName[100] = "";
  char lName[100] = "";

  printf("First Name: ");
  scanf("%s", &fName);

  printf("Last Name: ");
  scanf("%s", &lName);

  printf("%s %s TC, RMUTL, Chiang Mai, Thailand", fName, lName);

  return 0;
}
