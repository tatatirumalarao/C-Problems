#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=95 && marks<=100)
    {
        printf("grade A");   
    }
    else if(marks>=70 && marks<=94)
    {
        printf("grade B");
    }
    else if(marks>=50 && marks<=69)
    {
        printf("grade C");
    }
    else if(marks>=36 &&  marks<=49)
    {
        printf("grdae D");
    }
    else 
    {
        printf("fail");
    }
        return 0;
    }