#include <stdio.h>
int main() 
{
    int n,i,min=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<i)
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}