#include <stdio.h>

int main() {
    int choice;
    int num1, num2;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice) {
        case 1:
            printf("Sum = %d", num1 + num2);
            break;

        case 2:
            printf("Difference = %d", num1 - num2);
            break;

        case 3:
            printf("Product = %d", num1 * num2);
            break;

        case 4:
            if (num2 != 0)
                printf("Quotient = %d", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}