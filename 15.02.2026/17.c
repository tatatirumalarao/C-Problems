#include <stdio.h>
int main() 
{
    int range;
    scanf("%d",&range);
    if(range>=10 && range<=20)
    {
        printf("number is within range");
    }

    else
    {
        printf("number is without range");
    }
    return 0;
}