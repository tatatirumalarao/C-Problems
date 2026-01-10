#include <stdio.h>
int main()
{
    int i, num,temp,digit,sum=0,fact;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("stromg number %d",num);
    }
    else
    {
        printf("not a strong number %d",num);
    }

    return 0;
}