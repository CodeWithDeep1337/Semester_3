#include <stdio.h>
int main()
{
    int num, count = 0, reminder, Sum = 0;

    printf("enter a number:");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0)
    {

        count++;

        temp = temp / 10;
    }

    int temp2 = num;

    while (temp2 > 0)
    {
        reminder = temp2 % 10;
        int power = 1;

        for (int i = 1; i <= count; i++)
        {
            power *= reminder;
        }
        Sum += power;

        temp2 /= 10;
    }
    if (Sum == num)
    {
        printf("armstrong chhe..");
    }
    else
    {
        printf("armstrong nathi..");
    }

    return 0;
}