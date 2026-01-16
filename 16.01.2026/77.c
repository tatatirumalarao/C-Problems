#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[] = "@company.com";

    printf("Enter email address: ");
    scanf("%s", email);

    int emailLength = strlen(email);
    int domainLength = strlen(domain);
    if (emailLength >= domainLength) {
        if (strcmp(email + emailLength - domainLength, domain) == 0) {
            printf("Valid\n");
        } else {
            printf("Invalid\n");
        }
    } else {
        printf("Invalid\n");
    }

    return 0;
}