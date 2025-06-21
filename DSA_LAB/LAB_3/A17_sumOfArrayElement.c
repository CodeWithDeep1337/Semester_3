#include <stdio.h>

int main()
{
    int n, m1, m2;
    int sum = 0;
    printf("enter number of array:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter elment: %d", i);
        scanf("%d", &arr[i]);
    }

    printf("enter starting:");
    scanf("%d", &m1);

    printf("enter ending");
    scanf("%d", &m2);

    for (int i = m1; i <= m2; i++)
    {
        sum += arr[i];
    }
    printf("sum= %d", sum);

    return 0;
}