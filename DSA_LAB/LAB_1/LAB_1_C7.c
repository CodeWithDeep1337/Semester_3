#include<stdio.h>
int main(){
    int days,week,year;
    printf("enter days:");
    scanf("%d",&days);
    year=days/365;
    days=days%365;
    week=days/7;
    days=days%7;
    printf("%d year %d week %d days",year,week,days);
    return 0;

}