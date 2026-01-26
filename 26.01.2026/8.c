#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i, duplicate = 0;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if (freq[(int)str[i]] > 1) {
            duplicate = 1;
            break;
        }
    }
    if (duplicate)
        printf("Duplicates found");
    else
        printf("No duplicates");

    return 0;
}