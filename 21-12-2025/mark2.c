#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=90 && marks<=100)
    {
        printf("grade:A+");
    }
    else if(marks>=80 && marks<=89)
    {
        printf("grade:A");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("grade:B");
    }
    else if(marks>=60 && marks<=69)
    {
        printf("garde:C");
    }
    else if(marks<60)
    {
        printf("grade:C");
    }
    else 
    {
        printf("invalid input");
    }
    return 0;
}