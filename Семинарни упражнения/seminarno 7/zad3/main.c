#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrixes = 2;
    int rows = 2;
    int columns = 5;

    int *arr = malloc(matrixes*rows*columns * sizeof(int));
   // int *arr = calloc(matrixes*rows*columns, sizeof(int));

    for(int i = 0; i < matrixes*rows*columns; i++) {
        printf("%d ", arr[i]);
        if(i % columns == columns - 1)
        {
            printf("\n");
        }
        if(i % (rows*columns) == (rows*columns) - 1)
        {
            printf("\n");
        }
    }

    for(int i = 0; i < matrixes*rows*columns; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < matrixes*rows*columns; i++) {
        printf("%d ", arr[i]);
                if(i % columns == columns - 1)
        {
            printf("\n");
        }
        if(i % (rows*columns) == (rows*columns) - 1)
        {
            printf("\n");
        }
    }

    free(arr);

    return 0;
}
