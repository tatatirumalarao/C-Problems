#include <stdio.h>
int main() 
{
    int n,i,a=0,b=1,next;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;
    }
    
    return 0;
}