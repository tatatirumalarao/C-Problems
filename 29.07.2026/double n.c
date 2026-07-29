#include <stdio.h>
int main() 
{
    int a;
    printf("Value of a is: %d\n\n", a);

    int b = 10;
    printf("Value of b is: %d\n\n", b);

    int x = 5, y = 6, z = 7;
    printf("Value of x is: %d\n\n", x);
    printf("Value of y is: %d\n\n", y);
    printf("Value of z is: %d\n\n", z);

    int p = 1, q = 2, r = 3;
    printf("Value of p is: %d\n\n", p);
    printf("Value of q is: %d\n\n", q);
    printf("Value of r is: %d\n\n", r);

    int num = -25;
    printf("Value of num is: %d\n\n", num);

    int zero = 0;
    printf("Value of zero is: %d\n\n", zero);

    const int MAX = 100;
    printf("Value of MAX is: %d\n\n", MAX);

    unsigned int age = 30;
    printf("Value of age is: %u\n\n", age);

    long int population = 1000000L;
    printf("Value of population is: %ld\n\n", population);

    short int level = 5;
    printf("Value of level is: %hd\n\n", level);

    int hex = 0xFF;
    printf("Value of hex is: %d\n\n", hex);

    int octal = 011;
    printf("Value of octal is: %d\n\n", octal);

    int sum = 5 + 7;
    printf("Value of sum is: %d\n\n", sum);

    int size = sizeof(int);
    printf("Size of int is: %d\n\n", size);

    int result = x * y;
    printf("Value of result is: %d\n\n", result);
}