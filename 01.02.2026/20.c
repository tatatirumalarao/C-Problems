#include <stdio.h>
int isPrime(int num)
{
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
Example Usage
int main()
{
    int num = 10;
    if (isPrime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}