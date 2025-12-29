#include <stdio.h>
int main() 
{
    int marks;
    scanf("%d",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("grade A");
    }
    else if(marks>=55 && marks<=79)
    {
        printf("grade B");
    }
    else if(marks>=45 && marks<=54)
    {
        printf("grade C");
    }
    else 
    {
        printf("fail");
    }
    return 0;
}