#include <stdio.h>
int main() 
{
    int a=2,b=3;
    printf("enter the value of a,b:");
    if(a<b || b<a)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}