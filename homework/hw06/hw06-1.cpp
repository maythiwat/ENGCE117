#include <stdio.h>

int main()
{
  int c;
  scanf("%d", &c);

  int isEven = c % 2 == 0;

  for (int i = 0; i < c; i++)
  {
    if (isEven)
    {
      printf("(%d) Hello World\n", i + 1);
    }
    else
    {
      printf("[%d] Hello World\n", i + 1);
    }
  }

  return 0;
}