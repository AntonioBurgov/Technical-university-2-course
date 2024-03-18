#include <stdio.h>

int main() {
    int number;

    printf("Enter a number between 0 and 9: ");
    scanf("%d", &number);


    if (number >= 0 && number <= 9) {

        switch (number) {
            case 0:
            case 2:
            case 4:
            case 6:
            case 8:
                printf("%d is even.\n", number);
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 9:
                printf("%d is odd.\n", number);
                break;
        }
    } else {

        printf("Invalid input! Please enter a number between 0 and 9.\n");
    }

    return 0;
}
