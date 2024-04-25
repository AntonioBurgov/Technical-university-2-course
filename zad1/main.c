#include <stdio.h>

#define MAX_N 100
#define MAX_M 100


void swap_rows(int matrix[][MAX_M], int row1, int row2, int m) {
    for (int j = 0; j < m; j++) {
        int temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}

int main() {
    int n, m;
    int matrix[MAX_N][MAX_M];

    printf("Enter the dimensions of the matrix (N and M): ");
    scanf("%d %d", &n, &m);

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

    int min_row = 0, max_row = 0;
    int min_value = matrix[0][0], max_value = matrix[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < min_value) {
                min_value = matrix[i][j];
                min_row = i;
            }
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
            }
        }
    }

    swap_rows(matrix, min_row, max_row, m);

    printf("Matrix after swapping rows with the smallest and largest elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
