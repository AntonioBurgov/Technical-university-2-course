#include <stdio.h>

void swap(float *num1, float *num2);

int main() {
    float num1, num2;
    printf("Enter numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("%f %f\n", num1, num2);

    swap(&num1, &num2);
    printf("%f %f\n", num1, num2);

    return 0;
}

void swap(float *num1, float *num2) {
    float num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
}
