#include <stdio.h>
#include <string.h>
int main() {
    char log[200];
    fgets(log, sizeof(log), stdin);
    if (strstr(log, "error") != NULL) {
        printf("Found");
    } else {
        printf("Not Found");
    }
    return 0;
}