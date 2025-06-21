#include<stdio.h>

int main(){
    char c;
    printf("enter character:");
    scanf("%c",&c);
    if(c=='A'|| c=='E' || c=='I' || c=='O' || c=='U'){
        printf("charcater is vowel");
    }
    else{
        printf("consonent");
    }

   return 0;
}