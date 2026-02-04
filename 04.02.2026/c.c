#include <stdio.h>
float calculateAttendance(int attended, int total) {
    return ((float)attended / total) * 100;
}
int main() {
    printf("80/100 = %.0f%%\n", calculateAttendance(80, 100));
    printf("45/50  = %.0f%%\n", calculateAttendance(45, 50));
    printf("60/75  = %.0f%%\n", calculateAttendance(60, 75));
    printf("30/60  = %.0f%%\n", calculateAttendance(30, 60));
    printf("90/100 = %.0f%%\n", calculateAttendance(90, 100));

    return 0;
}