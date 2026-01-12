#include <stdio.h>
int main() 
{
    int a[50],b[50],c[100];
    int n1,n2,i,j;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",b[i]);
        c[n1+i]=b[i];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    
       return 0;
}