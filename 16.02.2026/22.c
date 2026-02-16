#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Tuesday");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.");
    }

    return 0;
}