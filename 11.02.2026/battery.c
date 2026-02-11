#include <stdio.h>
int main() 
{
    int battery;
    scanf("%d",&battery);
    if(battery<20)
    {
        printf("low battery");
    }
    else 
    {
        printf("battery ok");
    }
    return 0;
}