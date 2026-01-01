#include <stdio.h>
int main()
{
    int array[100],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    
    return 0;
}