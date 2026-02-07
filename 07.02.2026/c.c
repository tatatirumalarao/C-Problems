#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=90 && marks<=100)
    {
        printf("grade A");
    }
    else if(marks>=70 && marks<=89)
    {
        printf("grade B");
    }
    else if(marks>=45 && marks<=69)
    {
        printf("grade C");
    }
    else if(marks<=44)
    {
        printf("fail");
    }
    return 0;
}