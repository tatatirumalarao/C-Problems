#include <stdio.h>
int calculateBill(int units) {
    int bill = 0;
    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 8);
    }
    return bill;
}
int main() {
    int units, amount;
    scanf("%d", &units);
    amount = calculateBill(units);
    printf("%d", amount);
    return 0;
}