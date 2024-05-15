#include <stdio.h>

int main()
{
    int salary = 1000;
    int musicians;

    scanf("%d", &musicians);

    double moneyPerPerson = (double)salary / musicians;

    printf("%.2f\n", moneyPerPerson);
    return 0;
}
