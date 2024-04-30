#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    int *original_array, *filtered_array;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    original_array = (int *)malloc(n * sizeof(int));
    filtered_array = (int *)malloc(n * sizeof(int));

    if (original_array == NULL || filtered_array == NULL) {
        printf("Memory allocation failed!\n");
        free(original_array);
        free(filtered_array);
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &original_array[i]);
    }

    int filtered_index = 0;
    for (int i = 0; i < n; i++) {
        if (!is_prime(original_array[i])) {
            filtered_array[filtered_index++] = original_array[i];
        }
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", original_array[i]);
    }
    printf("\n");

    printf("Filtered array (non-primes):\n");
    for (int i = 0; i < filtered_index; i++) {
        printf("%d ", filtered_array[i]);
    }
    printf("\n");

    free(original_array);
    free(filtered_array);

    return 0;
}
