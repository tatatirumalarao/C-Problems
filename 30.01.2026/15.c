#include <stdio.h>
int main() {
    char str[200];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
        for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("%s", str);
    return 0;
}