#include<stdio.h>
int main()
{
    int n,i,arr[100],sl,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]!=l)
        {
            l=arr[i];
        }
    }
    printf("%d",sl);
    return 0;



}