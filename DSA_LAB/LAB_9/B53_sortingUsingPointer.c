// WAP to sort the array elements using Pointer. 


#include <stdio.h>
#include<stdlib.h>

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

    int temp=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           
            if(*(ptr+i)<*(ptr+j)){
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+i);
                *(ptr+i)=temp;
                
            }
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
    }
    return 0;
}