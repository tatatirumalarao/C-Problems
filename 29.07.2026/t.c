#include <stdio.h>
int main() 
{
    int a;
    printf("Value of a is: %d\t", a);

    int b = 10;
    printf("Value of b is: %d\t", b);

    int x = 5, y = 6, z = 7;
    printf("Value of x is: %d\t", x);
    printf("Value of y is: %d\t", y);
    printf("Value of z is: %d\t", z);

    int p = 1, q = 2, r = 3;
    printf("Value of p is: %d\t", p);
    printf("Value of q is: %d\t", q);
    printf("Value of r is: %d\t", r);

    int num = -25;
    printf("Value of num is: %d\t", num);

    int zero = 0;
    printf("Value of zero is: %d\t", zero);

    const int MAX = 100;
    printf("Value of MAX is: %d\t", MAX);

    unsigned int age = 30;
    printf("Value of age is: %u\t", age);

    long int population = 1000000L;
    printf("Value of population is: %ld\t", population);

    short int level = 5;
    printf("Value of level is: %hd\t", level);

    int hex = 0xFF;
    printf("Value of hex is: %d\t", hex);

    int octal = 011;
    printf("Value of octal is: %d\t", octal);

    int sum = 5 + 7;
    printf("Value of sum is: %d\t", sum);

    int size = sizeof(int);
    printf("Size of int is: %d\t", size);

    int result = x * y;
    printf("Value of result is: %d\t", result);
}