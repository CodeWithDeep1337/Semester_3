#include <stdio.h>

void Pascal(int n)
{
    for (int i = 0; i < n; i++)
    {
        int value = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    Pascal(rows);

    return 0;
}
