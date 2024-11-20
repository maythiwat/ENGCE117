#include <stdio.h>

int main()
{
  int n = 0;
  int arr[100];
  int idx = 0;

  while (n != -1)
  {
    printf("Input [%d] : ", idx);
    scanf("%d", &n);
    if (n != -1)
    {
      arr[idx] = n;
      idx++;
    }
  }

  printf("Index = ");
  for (int i = 0; i < idx; i++)
  {
    printf("%d ", i);
  }

  printf("\nArray = ");
  for (int i = 0; i < idx; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}
