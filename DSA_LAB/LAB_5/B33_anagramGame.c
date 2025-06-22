#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
void main(){
    int n;
    char temp;
    printf("Enter number of world:");
    scanf("%d",&n);
    char words[n][10];
    printf("Enter word:");
    for (int i = 0; i < n; i++)
    {
        scanf("%s",words[i]);
    }
    srand(time(0));
    int ran=rand()%n;
    char new[20];
    printf("random name: %s \n",words[ran]);
    printf("Enter new name:");
    scanf("%s",new);
    for (int i = 0; i < strlen(new)-1; i++)
    {
        for (int j = i+1; j < strlen(new); j++)
        {
            if (new[i]>new[j])
            {
                temp=new[i];
                new[i]=new[j];
                new[j]=temp;
            }
            
        }
    }
        int a=strlen(words[ran]);
    
    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (words[ran][i]>words[ran][j])
            {
                temp=words[ran][i];
                words[ran][i]=words[ran][j];
                words[ran][j]=temp;
            }
            
        }
    }
    if (strcmp(words[ran],new)==0)
    {
        printf("new word is your old word anagram");
    }
    else
    {
        printf("new word is not your old word anagram");
    }
}