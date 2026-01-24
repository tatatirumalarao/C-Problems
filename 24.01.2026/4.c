#include <stdio.h>

int main() {
    char sentence[200];
    int i, words = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    for (i = 0; sentence[i] != '\0'; i++) {
        if ((sentence[i] != ' ' && sentence[i] != '\n') &&
            (i == 0 || sentence[i - 1] == ' ')) {
            words++;
        }
    }
    printf("%d\n", words);
    return 0;
}