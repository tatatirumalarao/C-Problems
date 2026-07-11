#include <stdio.h>
int main() 
{
    int marks;
    printf("enter the marks : ");
    scanf("%d",&marks);
    if(marks>=70 && marks<=90)
    {
        printf("grade A");
    }
    else if(marks>=60 && marks<=69)
    {
        printf("grade B");
    }

    else if(marks>=50 && marks<=59)
    {
        printf("grade c");
    }
    else 
    {
        printf("fail");
    }
    return 0;
}