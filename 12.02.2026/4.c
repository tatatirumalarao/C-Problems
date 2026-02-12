#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b && b<a)
    {
        printf("a is greater");
    }
    else
    {
        printf("b is lesser");
    }
    return 0;
}