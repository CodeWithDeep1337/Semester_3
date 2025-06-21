#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    printf("enter 1:");
    scanf("%d",&a);
    printf("enter 2:");
    scanf("%d",&b);
    printf("enter 3:");
    scanf("%d",&c);


    if(a>b){
        if(a>c){
            printf("a big.");
        }
        else{
            printf("c big.");
        }
    }
    else{
        if(b>c){
            printf("b big.");
        }
        else{
            printf("c is big");
        }
    }


    return 0;
}