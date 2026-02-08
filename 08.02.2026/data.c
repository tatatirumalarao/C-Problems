#include <stdio.h>
int main() 
{
    float data;
    scanf("%f",&data);
    if(data<=2.0)
    {
        printf("data within limit");
    }
    else {
        printf("data limit exceeded");
    }
    return 0;
}