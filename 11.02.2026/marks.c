#include <stdio.h>
int main() 
{
    int marks;
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
    {
        printf("distinction");
    }
    else if(marks>35 && marks<=84)
    {
        printf("pass");
    }
    else 
    {
        printf("fail");
    }
    return 0;
}