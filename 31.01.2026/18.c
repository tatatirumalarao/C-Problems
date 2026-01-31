#include <stdio.h>

int calculateBonus(int years)
{
    if (years >= 10)
        return 15000;
    else if (years >= 7)
        return 10000;
    else if (years >= 5)
        return 7000;
    else if (years >= 3)
        return 3000;
    else if (years >= 1)
        return 1000;
    else
        return 0;
}

int main()
{
    int years, bonus;

    printf("Enter years of experience: ");
    scanf("%d", &years);

    bonus = calculateBonus(years);

    printf("Bonus Amount: %d\n", bonus);

    return 0;
}