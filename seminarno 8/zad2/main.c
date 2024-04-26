#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    double grade;
} Student;

int main() {
    Student s[5];
    char name[50];
    double grade;

    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter grade: ");
        scanf("%lf", &grade);

        strcpy(s[i].name, name);
        s[i].grade = grade;
    }

    for (int i = 0; i < 5; i++) {
        printf("%s achieved %.2f\n", s[i].name, s[i].grade);
    }

    printf("-------------------------------------------------------------\n");


    for (int i = 0; i < 5; i++) {
        if (s[i].grade == 6) {
            printf("%s achieved %.2f\n", s[i].name, s[i].grade);
        }
    }

    printf("-------------------------------------------------------------\n");


    for (int i = 0; i < 5; i++) {
        if(s[i].grade < 6){
                s[i].grade+=1;

        }

    }
        for (int i = 0; i < 5; i++) {
        printf("%s achieved %.2f\n", s[i].name, s[i].grade);
    }

    return 0;
}
