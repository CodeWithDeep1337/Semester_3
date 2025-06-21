// find factorial through recursion...

#include <stdio.h>

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    int num = n;
    printf("%d", factorial(num));
    return 0;
}

