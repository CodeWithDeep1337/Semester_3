#include <stdio.h>
int main()
{
    int n;

    int m;
    printf("enter number n:");
    scanf("%d", &n);
    printf("enter number m:");
    scanf("%d", &m);
    for (int i = n; i <= m; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d  ", i);
        }
    }

    return 0;
}