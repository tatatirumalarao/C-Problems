#include <stdio.h>
int main() 
{
    int n,i,arr[n],found=0,search;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("%d  found",search,i+1);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("%d  not found",search);
    }
    
    return 0;
}