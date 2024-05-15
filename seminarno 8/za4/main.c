#include <stdio.h>
#include <stdlib.h>

void sum2(double num1, double num2, double *result);
void dbl(int *number);

int main() {

    double result;
    sum2(3.5, 1.5, &result);
    printf("%.2f\n", result);


    int number = 5;
    dbl(&number);
    printf("%d\n", number);

    return 0;
}

void sum2(double num1, double num2, double *result) {
    *result = num1 + num2;
}

void dbl(int *number) {
    *number = *number * 2;
}
