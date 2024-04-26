#include <stdio.h>
#include <stdlib.h>

int* arrMemory(int columns);
void arrPrint(int *arr, int size);
void arrInit(int *arr, int size);

int* arrMemory(int columns) {
    int *arr = malloc(columns * sizeof(int));
    return arr;
}

void arrPrint(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void arrInit(int *arr, int size) {
    for(int i = 0; i < size; i++) {

        scanf("%d",&arr[i]);
    }
}

int main() {
    int columns = 5;
    int* arr = arrMemory(columns);

    if (arr == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }
    arrPrint(arr, columns);

    arrInit(arr, columns);

    arrPrint(arr, columns);

    free(arr);

    return 0;
}



