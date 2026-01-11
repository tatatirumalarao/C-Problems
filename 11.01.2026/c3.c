#include <stdio.h>
int main()
{
    int i,base,power;
    long long result=1;
    scanf("%d",&base);
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        result=result*base;
    }
    printf("%d raised to the power %d is %d",base,power,result);
    return 0;
}