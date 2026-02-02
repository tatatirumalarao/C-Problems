#include <stdio.h>

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}