#include <stdio.h>
#include <string.h>

int main() {
    char code[100];
    int i, len, isPalindrome = 1;

    printf("Enter product code: ");
    scanf("%s", code);

    len = strlen(code);

    for (i = 0; i < len / 2; i++) {
        if (code[i] != code[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}