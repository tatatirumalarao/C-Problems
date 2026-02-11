#include <stdio.h>
int main() 
{
    int age,income;
    scanf("%d %d",&age,&income);
    if(age>=85  && income<300000)
    {
        printf("eligible");
    }
    else
    {
        printf("not eligible");
    }
    return 0;
}