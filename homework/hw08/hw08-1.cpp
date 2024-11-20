#include <stdio.h>

int main()
{
  int n;
  printf("Enter value n : ");
  scanf("%d", &n);

  int a;
  float b;
  for (int i = 1; i <= n; i++)
  {
    int v;
    printf("Enter number %d : ", i);
    scanf("%d", &v);
    a += v;
    b += v;
  }

  float avg = b / n;
  printf("Sum = %d\n", a);
  printf("Avg = %.2f", avg);

  return 0;
}
