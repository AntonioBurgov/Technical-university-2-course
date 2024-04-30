#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Enter the dimensions of the matrix (n and m): ");
    scanf("%d %d", &n, &m);

    if (n < 3 || m < 3) {
        printf("Matrix must be at least 3x3 in size.\n");
        return 1;
    }

    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(m * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i);

            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return 1;
        }
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int max_sum = -2147483648, sum;
    int start_row = 0, start_col = 0;


    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            sum = 0;
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    sum += matrix[i + k][j + l];
                }
            }
            if (sum > max_sum) {
                max_sum = sum;
                start_row = i;
                start_col = j;
            }
        }
    }

    printf("3x3 submatrix with the maximum sum:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[start_row + i][start_col + j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
