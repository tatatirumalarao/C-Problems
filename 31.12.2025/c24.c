#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    scanf("%d",&num);
    if(num==0)
    {
        sum==1;
    }
    else
    {
        while(num!=0)
        {
            digit=num%10;
            sum=sum+digit;
            num=num/10;
        }
    }
    printf("%d",sum);
    return 0;
}