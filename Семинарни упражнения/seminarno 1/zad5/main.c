#include <stdio.h>


int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    while( !(age > 0 && age <120)){
        printf("Invalid age! Please enter an age between 0 and 120.\n");
        printf("Enter your age: ");
        scanf("%d", &age);
        }


        if (age >= 18)
            printf("Nazdrave\n");
        else
            printf("Malyk si\n");

    return 0;
}
