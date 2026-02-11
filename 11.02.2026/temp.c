#include <stdio.h>
int main() 
{
    int tem;
    scanf("%d",&tem);
    if(tem>=18 && tem<=24)
    {
        printf("heating mode");
    }
    else if(tem>=25 && tem<=30)
    {
        printf("normal mode");
    }
    else
    {
        printf("cooling mode");
    }
    return 0;
}