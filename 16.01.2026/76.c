#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[50];
    int valid = 1;

    printf("Enter username: ");
    scanf("%s", username);

    int length = strlen(username);
    if (length < 6 || length > 12) {
        valid = 0;
    }
    if (isdigit(username[0])) {
        valid = 0;
    }
    for (int i = 0; i < length; i++) {
        if (!(islower(username[i]) || isdigit(username[i]))) {
            valid = 0;
            break;
        }
    }
    if (valid) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}