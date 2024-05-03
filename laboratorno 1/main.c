#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    double grade;
} Student;

/*
int main() {
    struct Student s1, s2;

    strcpy(s1.name, "Ivancho");
    s1.grade = 3.0;
    strcpy(s2.name, "Mariika");
    s2.grade = 4.0;

    printf("%s achieved %.2f\n", s1.name, s1.grade);
    printf("%s achieved %.2f\n", s2.name, s2.grade);

    return 0;
}
*/


int main() {
    char name[50];
    double grade;

    Student s1, s2;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter grade: ");
    scanf("%lf", &grade);

    strcpy(s1.name, name);
    s1.grade = grade;


    strcpy(s2.name, "Mariika");
    s2.grade = 4.0;


    printf("%s achieved %.2f\n", s1.name, s1.grade);
    printf("%s achieved %.2f\n", s2.name, s2.grade);

    return 0;
}

