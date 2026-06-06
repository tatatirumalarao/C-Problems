#include <stdio.h>
#define pi 3.14159
int main() 
{
    float area,radius;
    printf("the value of radius :");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("area of circle %f",area);

    return 0;
}