#include <stdio.h>

int main()
{
    int n, c = 0;

    printf("enter number of array:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter elment %d", i);
        printf(":");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
            break;
        }
    }
    if (c == 0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}