// WAP to find the largest element in the array using Pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("enter number:");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    int large = *ptr;

    for (int i = 0; i < n; i++)
    {
        if (large < *(ptr + i))
        {
            large = *(ptr + i);
        }
    }
    printf("largest=%d", large);
    return 0;
}