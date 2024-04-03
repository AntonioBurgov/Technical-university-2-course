#include <stdio.h>
#include <stdbool.h>

bool isMagic(int n, int m, int matrix[n][m]) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
        sum += matrix[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) {
            return false;
        }
    }

    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != sum) {
            return false;
        }
    }

    int diagonalSum = 0;
    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }
    if (diagonalSum != sum) {
        return false;
    }

    diagonalSum = 0;
    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][n - 1 - i];
    }
    if (diagonalSum != sum) {
        return false;
    }

    return true;
}

int main() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            do {
                printf("matrix[%d][%d]: ", i, j);
                scanf("%d", &matrix[i][j]);
            } while (matrix[i][j] < 2 || matrix[i][j] > 6);
        }
    }

    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Elements on the main diagonal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("Elements on the second diagonal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
    }
    printf("\n");

    printf("Elements above the main diagonal:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    printf("Elements under the main diagonal:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    printf("Transposed matrix:\n");
    int newArr[m][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            newArr[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", newArr[i][j]);
        }
        printf("\n");
    }

    if (isMagic(n, m, matrix)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    return 0;
}
