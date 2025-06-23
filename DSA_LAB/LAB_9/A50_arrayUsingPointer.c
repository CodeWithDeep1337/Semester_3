#include <stdio.h>
#include<stdlib.h>

//WAP to get and print the array elements using Pointer.
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    
  
  
     int *ptr=(int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
 printf("\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",*ptr+i);
    }




    return 0;
}