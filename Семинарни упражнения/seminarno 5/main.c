#include <stdio.h>

int main() {
    int hours, minutes, total_minutes;

    printf("Enter hour (0-23): ");
    scanf("%d", &hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);

    total_minutes = hours * 60 + minutes;

    total_minutes += 15;
    hours = total_minutes / 60;
    minutes = total_minutes % 60;

    printf("After 15 minutes, the time will be: %02d:%02d\n", hours, minutes);

    return 0;
}
