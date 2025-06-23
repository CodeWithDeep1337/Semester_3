// WAP to sort the array elements using Pointer.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    printf("enter length of string:");
    scanf("%s", &n);

    char *ptr = (char *)malloc((n + 1) * sizeof(char));

    printf("enter string:");
    scanf("%s", ptr);

    char *start = ptr;
    char *end = start + (strlen(ptr) - 1);

    while (start < end)
    {
        if (*start != *end)
        {
            printf("no.");
            break;
            
        }
        else
        {
           printf("yes.");
           break;
        
        }
         start++;
         end--;
    }

    return 0;
}