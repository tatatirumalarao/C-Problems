#include <stdio.h>
int main() 
{
    int balance;
    scanf("%d",&balance);
    if(balance<1000)
    {
        printf("low balance");
    }
    else
    {
        printf("sufficient balance");
    }
    return 0;
}