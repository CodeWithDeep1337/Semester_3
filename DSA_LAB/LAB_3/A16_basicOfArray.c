#include <stdio.h>

int main()
{
    int n;
    printf("enter number of array:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter elment: %d", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d", arr[i]);
    }

    return 0;
}