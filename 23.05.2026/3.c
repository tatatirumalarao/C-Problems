#include <stdio.h>
#define pi 3.14159
int main() 
{
    float area,radius;
    printf("the value of radius :");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("area %f",area);

    return 0;
}