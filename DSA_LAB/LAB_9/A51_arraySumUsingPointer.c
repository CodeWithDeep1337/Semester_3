// WAP to calculate the sum of n numbers using Pointer. 

#include <stdio.h>
#include<stdlib.h>

int main()
{

        int n;
    printf("enter number:");
    scanf("%d",&n);
    int sum=0;

     int *ptr=(int *)malloc(n*sizeof(int));

      for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
      }

      for(int i=0;i<n;i++){
        sum+=*ptr+i;
           
    }
    printf("sum=%d",sum);
    return 0;
}