#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *iptr=(int *)malloc(sizeof(10));
    char *cptr=(char *)malloc(sizeof(10));
    float *fptr=(float *)malloc(sizeof(10));

    if(iptr && cptr && fptr){

        *iptr=420;
        *cptr='a';
        *fptr=11.11f;

        printf("%d\n",*iptr);
        printf("%c\n",*cptr);
        printf("%f",*fptr);

        free(iptr);
        free(cptr);
        free(fptr);

    }
    else{
        printf("memory allocate nathi....");
    }
    

    return 0;
}