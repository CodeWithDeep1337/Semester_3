// find any number power..

#include <stdio.h>

int main()
{
    int base;
    printf("enter a base:");
    scanf("%d",&base);
    int power;
    printf("enter a power:");
    scanf("%d",&power);

    int result=1;

    for (int i=1;i<=power;i++){

        result *=base;
        
    }
    printf("%d",result);

        return 0;
}