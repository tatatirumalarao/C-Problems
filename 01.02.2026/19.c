#include <stdio.h>
int calculateTax(int salary)
{
    int tax = 0;
    if (salary <= 200000)
        tax = 0;
    else if (salary <= 300000)
        tax = 5000;
    else if (salary <= 500000)
        tax = 25000;
    else if (salary <= 800000)
        tax = 60000;
    else if (salary <= 1000000)
        tax = 100000;
    return tax;
}