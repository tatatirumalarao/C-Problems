#include <stdio.h>
int main() 
{
    int children;
    scanf("%d",&children);
    if(children<12)
    {
        printf("discount ticket");
    }
    else 
    {
        printf("regular ticket");
    }
    return 0;
}