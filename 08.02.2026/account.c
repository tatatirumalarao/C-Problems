#include <stdio.h>
int main() 
{
    int account;
    scanf("%d",&account);
    if(account<4)
    {
        printf("login allowed");
    }
    else
    {
        printf("account locked");
    }
    return 0;
}