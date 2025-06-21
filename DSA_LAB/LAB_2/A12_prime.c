#include <stdio.h>

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);

    int count=0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if(count==2){
        printf("prime chhe.");
    }
    else{
        printf("prime nathi..");
    }

    return 0;
}



