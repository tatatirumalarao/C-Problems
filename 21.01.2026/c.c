#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int duplicate = 0;

    printf("Enter a string: ");
    gets(str);   

    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate)
            break;
    }

    if (duplicate)
        printf("Duplicates found\n");
    else
        printf("No duplicates\n");

    return 0;
}