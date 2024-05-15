#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num;
    int max_num = -2147483648;
    int min_num = 2147483647;
    printf("Enter numbers (Write 0 to end input):\n");

    scanf("%d", &num);

    while (num != 0) {
        max_num = max(max_num, num);
        min_num = min(min_num, num);
        scanf("%d", &num);
    }

    printf("Maximum number is: %d\n", max_num);
    printf("Minimum number is: %d\n", min_num);

    return 0;
}
