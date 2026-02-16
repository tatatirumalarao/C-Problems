#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    scanf("%d %c %d", &num1, &operator, &num2);
    switch(operator) {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %d", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid operator!");
    }
    return 0;
}