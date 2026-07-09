#include <stdio.h>
int digit(int num)
{
    int count=0;
    while(num!=0)
    {
        int digit=num%10;
        count++;
        num=num/10;
    }
    return count;
}
int main() 
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    printf("enter the number of digits %d",digit(num));
    return 0;
}