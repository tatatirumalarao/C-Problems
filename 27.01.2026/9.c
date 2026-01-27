#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    printf("%s", str);

    return 0;
}