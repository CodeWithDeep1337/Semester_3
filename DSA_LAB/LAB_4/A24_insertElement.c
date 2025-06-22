#include <stdio.h>

int main()
{
  int n, num, position;
  printf("enter number of array:");
  scanf("%d", &n);

  int arr[n + 1];
  for (int i = 0; i < n; i++)
  {
    printf("enter elment %d:", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("enter a number:");
  scanf("%d", &num);
  printf("enter position where you insert a data:");
  scanf("%d", &position);

  for (int i = n + 1; i > position - 1; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[position - 1] = num;
  for (int i = 0; i < n + 1; i++)
  {
    printf("%d\n", arr[i]);
  }

  return 0;
}