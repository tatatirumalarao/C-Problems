#include <stdio.h>
int main() 
{
    int age;
    scanf("%d",&age);
    if(age<=25)
    {
        printf("2000");
    }
    else if(age<=40)
    {
        printf("4000");
    }
    else 
    {
        printf("fail");
    }

    return 0;
}