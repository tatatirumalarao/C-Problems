#include <stdio.h>
int main() 
{
    int marks;
    scanf("%d",&marks);
    if(marks>=90 && marks<=100)
    {
        printf("pass");
    }
    else if(marks>=65 && marks<=89)
    {
        printf("pass");
    }
    else if(marks>=40  && marks<=64)
    {
        printf("pass");
    }
    else if(marks<40)
    {
        printf("fail");
    }
    return 0;
}