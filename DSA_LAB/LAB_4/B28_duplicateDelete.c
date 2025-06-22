#include <stdio.h>

int main()
{
    int n, c = 0, i, num, j, k;

    printf("enter number of array:");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter elment %d", i + 1);
        printf(":");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
