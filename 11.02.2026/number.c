#include <stdio.h>
int main() 
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("posuitive");
    }
    else if(num==0)
    {
        printf("neutral");
    }
        else if(num<0)
        {
            printf("negative");
        }
    
    return 0;
}