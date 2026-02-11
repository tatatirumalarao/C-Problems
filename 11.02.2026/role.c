#include <stdio.h>
int main() 
{
    int role;
    scanf("%d",&role);
    if(role==1)
    {
        printf("admin");
    }
    else if(role==2)
    {
        printf("user");
    }
    else
    {
        printf("guest");
    }
    return 0;
}