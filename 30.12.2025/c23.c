#include<stdio.h>
int main()
{
    int num,rev,remainder;
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        rev=rev*10+remainder;
        num=num/10;
    }
    printf("%d\n",rev);
    return 0;
}