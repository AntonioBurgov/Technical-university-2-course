#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3 && num1 == num3) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

}
