#include <stdio.h>
#include <stdlib.h>

int main() {
    int flat[3][2][2];
    int number = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Enter the number of people living in flat number %d: ", number);
                scanf("%d", &flat[i][j][k]);
                number++;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        printf("Floor %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", flat[i][j][k]);
                sum += flat[i][j][k];
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("The sum is %d\n", sum);

    return 0;
}
