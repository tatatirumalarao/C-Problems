#include <stdio.h>
int main() 
{
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num && num!=0)
    {
        printf("perfect number %d",num);
    }
    else
    {
        printf("not a perfect number %d",num);
    }
    
    return 0;
}