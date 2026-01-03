#include <stdio.h>
int main()
{
    int n,count=0,rem,digit;
    scanf("%d",&n);
    if(n==0)
    {
        count==1;
    }
    else
    while(n!=0)
    {
        rem=rem%10;
        digit=digit*10+rem;
        n=n/10;
        count++;
    }
    printf("%d",count);
    
    return 0;
}