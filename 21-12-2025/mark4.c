#include <stdio.h>
int main()
{
    int units,price = 0;
    scanf("%d",&units);
    if(units<=100)
    {
        price=units*1;
        printf("%d",price);
    }
    else 
    {
        price =(100*1) + 2*(units-100);
        printf("%d",price);
    }
    return 0;
}