#include <stdio.h>
int main() 
{
    int password;
    scanf("%d",&password);
    if(password>=8)
    {
        printf("strong password");
    }
    else
    {
        printf("weak password");
    }
    return 0;
}