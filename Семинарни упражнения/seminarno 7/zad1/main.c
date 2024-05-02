#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2;
    int columns = 5;

    int *arr = malloc(columns * sizeof(int));
    int *arr = calloc(columns, sizeof(int));

    for(int i = 0; i < columns; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < columns; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < columns; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

