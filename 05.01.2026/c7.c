#include<stdio.h>
int main() 
{
    int n,i,arr[100],found=0,search;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("enter the value of search");
     scanf("%d",&search);
     for(i=0;i<n;i++)
     {
        if(arr[i]==search)
        {
            found=1;
            printf("%d it is found position ",i+1);
            break;
        }
     }
     if(found==0)
     {
        printf("it is not found position");
     }

    return 0;
    }