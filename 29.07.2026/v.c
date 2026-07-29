#include <stdio.h>
int main() 
{
    int a;
    printf("Value of a is: %d\v", a);

    int b = 10;
    printf("Value of b is: %d\v", b);

    int x = 5, y = 6, z = 7;
    printf("Value of x is: %d\v", x);
    printf("Value of y is: %d\v", y);
    printf("Value of z is: %d\v", z);

    int p = 1, q = 2, r = 3;
    printf("Value of p is: %d\v", p);
    printf("Value of q is: %d\v", q);
    printf("Value of r is: %d\v", r);

    int num = -25;
    printf("Value of num is: %d\v", num);

    int zero = 0;
    printf("Value of zero is: %d\v", zero);

    const int MAX = 100;
    printf("Value of MAX is: %d\v", MAX);

    unsigned int age = 30;
    printf("Value of age is: %u\v", age);

    long int population = 1000000L;
    printf("Value of population is: %ld\v", population);

    short int level = 5;
    printf("Value of level is: %hd\v", level);

    int hex = 0xFF;
    printf("Value of hex is: %d\v", hex);

    int octal = 011;
    printf("Value of octal is: %d\v", octal);

    int sum = 5 + 7;
    printf("Value of sum is: %d\v", sum);

    int size = sizeof(int);
    printf("Size of int is: %d\v", size);

    int result = x * y;
    printf("Value of result is: %d\v", result);
}