#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=b && b>=a)
    {
        printf("a is smaller");
    }
    else 
    {
        printf("b is smaller");
    }
    return 0;
}