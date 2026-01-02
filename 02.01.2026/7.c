#include <stdio.h>
int main() 
{
    int arr[100],n,i,search,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value of serach");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
    if(arr[i]==search)
    {
        found=i;
        printf("%d it is found",i+1,search);
        break;
    }
    }
    if(found==0)
    {
        printf("%d it is not found",search);
    }   
    return 0;
}