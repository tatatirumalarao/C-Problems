#include <stdio.h>

int main() {
    int r, c;
    int A[10][10], B[10][10], Sum[10][10];

    // Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix addition
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}