#include <stdio.h>
#include <stdlib.h>

int main() {
    float number = 3.14;
    float *pointer = &number;

    printf("%.2f\n", number);
    printf("%p\n", (void *)&number);
    printf("%.2f\n", *pointer);
    printf("%p\n", (void *)pointer);

    return 0;
}
void sum2(double num1, double num2, double *result) {
    *result = num1 + num2;
}

void dbl(int *number) {
    *number = *number * 2;
}
