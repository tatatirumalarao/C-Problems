#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;
    printf("Enter the customer name: ");
    scanf("%s", name);
    name[0] = toupper(name[0]);
    for (i = 1; name[i] != '\0'; i++) {
        name[i] = tolower(name[i]);
    }

    printf("Formatted Name: %s\n", name);

    return 0;
}