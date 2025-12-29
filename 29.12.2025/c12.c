#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    if(a<10)
    {
        printf("single digit");
    }    
    else 
    {
        printf("not a single digit");
    }
    return 0;
}