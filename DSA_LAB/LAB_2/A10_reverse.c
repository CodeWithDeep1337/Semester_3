#include <stdio.h>

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);

    int revNum = 0;
    int reminder = 0;

    while (num > 0)
    {

        reminder = num % 10;
        revNum = revNum * 10 + reminder;
        num /= 10;
    }
    printf("%d", revNum);

    return 0;
}