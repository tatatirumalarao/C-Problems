#include <stdio.h>
int main() 
{
    int  n,i,j,isprime,sum=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        isprime=1;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        sum=sum+i;
    }
    }
    printf("sumof prime number up to %d is %d",n,sum);    
    return 0;
}