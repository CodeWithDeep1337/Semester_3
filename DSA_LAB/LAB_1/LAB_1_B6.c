#include<stdio.h>

int main(){
    int seconds,minute,hours;
    printf("enter second:");
    scanf("%d",&seconds);
    hours=seconds/3600;
    seconds%=3600;
    minute=seconds/60;
    seconds%=60;
   
    printf("%d",hours);
    printf(" :%d",minute);
    printf(" :%d",seconds);
    
    return 0;

}


