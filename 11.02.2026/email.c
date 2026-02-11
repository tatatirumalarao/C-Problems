#include <stdio.h>
int main()
{
    int len;
    scanf("%d",&len);
    if(len>5)
    {
        printf("valid email");
    }
    else
    {
        printf("invalid email");
    }
    return 0;
}