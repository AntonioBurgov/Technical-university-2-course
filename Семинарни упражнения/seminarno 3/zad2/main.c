#include <stdio.h>

int main() {
    int table[10][10];

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            table[i][j] = i * j;
        }
    }

    for (int i = 0; i <= 9; i++) {
        printf("Multiplication table for %d:\n", i);
        for (int j = 0; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, table[i][j]);
        }
        printf("\n");
    }

    int number1, number2;

    printf("Enter two numbers (between 0 and 9): ");
    scanf("%d %d", &number1, &number2);

    if (number1 < 0 || number1 > 9 || number2 < 0 || number2 > 9) {
        printf("Invalid input. Numbers should be between 0 and 9.\n");
        return 1;
    }

    printf("The multiplication is %d:\n", table[number1][number2]);

    return 0;
}
