#include <stdio.h>
#include <string.h>

int compare() {
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);

    char string1[100];
    printf("Enter another string: ");
    scanf("%s", string1);

    if (strcmp(string, string1) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    if (compare()) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
