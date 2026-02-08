#include <stdio.h>
int main() 
{
    int pa;
    scanf("%d",&pa);
    if(pa>=1000)
    {
        printf("discount applied");
    }   
    else
    {
        printf("no discount");
    }
    return 0;
}