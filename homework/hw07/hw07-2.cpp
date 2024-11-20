#include <stdio.h>

int main()
{
  int a;
  int b;

  printf("Start : ");
  scanf("%d", &a);

  printf("End : ");
  scanf("%d", &b);

  while (a <= b)
  {
    int i = 1;

    while (i <= 9)
    {
      printf("%d x %d = %d\n", a, i, a * i);
      i++;
    }

    printf("\n");
    a++;
  }

  return 0;
}
