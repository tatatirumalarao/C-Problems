#include <stdio.h>
int main() 
{
    int value;
    scanf("%d",&value);
    if(value>=499)
    {
        printf("free delivery");
    }
    else 
    {
        printf("delivery charges apply");
    }
    return 0;
}