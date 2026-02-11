#include <stdio.h>
int main() 
{
    int tic;
    scanf("%d",&tic);
    if(tic>=1 && tic<=100)
    {
        printf("confirmed");
    }
    else
    {
        printf("waiting list");
    }
    return 0;
}