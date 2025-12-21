#include <stdio.h>
int main() 
{
    int marks;
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("pass");
    }
    else if(marks>=35)
    {
        printf("grace pass");
    }
    return 0;
}