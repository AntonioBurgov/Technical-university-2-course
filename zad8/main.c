#include <stdio.h>
#include <stdlib.h>


void insert_and_print(int *array, int size, int index, int value) {
    if (index < 0 || index >= size) {
        printf("Index out of bounds.\n");
        return;
    }

    array[index] = value;

    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int *original_array;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    original_array = (int *)malloc(n * sizeof(int));
    if (original_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &original_array[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", original_array[i]);
    }
    printf("\n");

    int index, value;
    printf("Enter an index and a value to insert: ");
    scanf("%d %d", &index, &value);

    insert_and_print(original_array, n, index, value);

    free(original_array);
    return 0;
}
