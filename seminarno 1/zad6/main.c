#include <stdio.h>

int main()
{
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid number\n");
    }

    else {
    int factorial = number;
    printf("%d", number);

        for (int i = number-1; i >= 1; i--) {
                printf("* %d", i);
            factorial *= i;

        }

        printf("= %d", factorial);
    }

    return 0;
}
