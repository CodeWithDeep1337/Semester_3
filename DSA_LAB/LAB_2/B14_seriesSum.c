#include <stdio.h>
int main()
{
    int n;
    int sum = 0, Sum = 0;

    printf("enter number n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        Sum = Sum + sum;
    }
    printf("%d", Sum);

    return 0;
}