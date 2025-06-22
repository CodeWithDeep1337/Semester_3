#include <stdio.h>

int main()
{
    int n,num,position;
    printf("enter number of array:");
    scanf("%d",&n);
   printf(" WARNING:plese enter data in assending order!!");
    int arr[n+1];
    for(int i=0;i<n;i++){
        printf("enter elment %d:",i+1);
        scanf("%d",&arr[i]);
    }
   printf("enter a number:");
   scanf("%d",&num);


  
    for(int i=n+1;i>n-1;i--){
        if(arr[i-1]<num){
            break;

        }
     
       
    }
    arr[i]=num;
    for(int i=0;i<n+1;i++){
      printf("%d\n",arr[i]);
    }


    
    return 0;
}