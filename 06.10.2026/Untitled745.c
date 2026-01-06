#include <stdio.h>
int main() 
{
    int n,i,arr[100];
    float sum=0,average;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    
        sum=sum+arr[i];
    }
    average=sum/n;
    printf("%.2f",average);    
    return 0;
}