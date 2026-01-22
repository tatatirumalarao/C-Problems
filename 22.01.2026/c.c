#include <stdio.h>

int main() {
    char s[100];

    // Read a line of input
    fgets(s, sizeof(s), stdin);

    // Print the required output
    printf("Hello, World!\n");
    printf("%s", s);

    return 0;
}