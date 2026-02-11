#include <stdio.h>
int main() 
{
    int per;
    scanf("%d",&per);
    if(per>=75)
    {
        printf("eligible for exam");
    }
    else
    {
        printf("not eligible");
    }
    return 0;
}