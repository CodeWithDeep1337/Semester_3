#include <stdio.h>

int main()
{
    int n;

    printf("enter number of array:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter elment %d", i);
        printf(":");
        scanf("%d", &arr[i]);
    }
    int least = arr[0];
    int leastIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < least)
        {
            least = arr[i];
            leastIndex = i;
        }
    }
    printf("least=%d , index=%d", least, leastIndex);
    printf("\n");

    int large = arr[0];
    int largeIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            largeIndex = i;
        }
    }
    printf("large=%d , index=%d", large, largeIndex);

    return 0;
}