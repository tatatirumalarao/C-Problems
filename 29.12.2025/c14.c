#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    if(a%2==0 || a%3==0)
    {
        printf("yes");
    }    
    else 
    {
        printf("No");
    }
    return 0;
}