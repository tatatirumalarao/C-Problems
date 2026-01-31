#include <stdio.h>

char* calculateGrade(int marks) {
    if (marks >= 90)
        return "A";
    else if (marks >= 80)
        return "B";
    else if (marks >= 60)
        return "C";
    else if (marks >= 40)
        return "D";
    else
        return "Fail";
}

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Grade: %s\n", calculateGrade(marks));

    return 0;
}