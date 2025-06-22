#include <stdio.h>

int main()
{
    int arr1[3][2];
    int arr2[2][3];
    int multiple[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("enter element:");
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter element:");
            scanf("%d",&arr2[i][j]);
        }
         printf("\n");
    }
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){  
           for(int k=0;k<2;k++){
            multiple[i][j] +=arr1[i][k]*arr2[k][j];
           }
       
        }
    }
 for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
            printf("%d ",multiple[i][j]);
        }
         printf("\n");
    }

 return 0;          
}
