#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int square(float a, char choice);
int rectangle(float a, float b, char choice);
int triangle(float a, float b, float c, char choice);

int main() {
    char choice;
    printf("Calculate area and perimeter for (S)square or (P)perimeter: ");
    scanf(" %c", &choice);

    int choice2;
    printf("Choose: Square-1, Rectangle-2, or Right triangle-3: ");
    scanf("%d", &choice2);

    switch (choice2) {
        case 1: {
            float a;
            printf("Enter a side length: ");
            scanf("%f", &a);
            square(a, choice);
            break;
        }
        case 2: {
            float length, width;
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter width: ");
            scanf("%f", &width);
            rectangle(length, width, choice);
            break;
        }
        case 3: {
            float a, b, c; // Declare a, b, and c here
            printf("Enter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);
            printf("Enter c: ");
            scanf("%f", &c);
            triangle(a, b, c, choice); // Pass a, b, and c to the function
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

int square(float a, char choice) {
    if (choice == 'S') {
        float S = a * a;
        printf("Area: %f\n", S);
    } else if (choice == 'P') {
        float P = 4 * a;
        printf("Perimeter: %f\n", P);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}

int rectangle(float length, float width, char choice) {
    if (choice == 'S') {
        float S = length * width;
        printf("Area: %f\n", S);
    } else if (choice == 'P') {
        float P = 2 * (length + width);
        printf("Perimeter: %f\n", P);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}

int triangle(float a, float b, float c, char choice) {
    if (choice == 'S') {
        float P = (a + b + c) / 2;
        float S = sqrt(P * (P - a) * (P - b) * (P - c));
        printf("Area: %f\n", S);
    } else if (choice == 'P') {
        float P = a + b + c;
        printf("Perimeter: %f\n", P);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}
