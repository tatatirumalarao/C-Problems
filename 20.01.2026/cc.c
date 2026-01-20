#include <stdio.h>
int main() 
{
    int i,n,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}