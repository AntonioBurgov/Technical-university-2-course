#include <stdio.h>
#include <stdlib.h>

int writeFile(char file_name[]) {
    FILE* fp = fopen(file_name, "wt");

    char name[50];
    double grade;


    scanf("%s,%lf", name, &grade);
    fprintf(fp, "%s %.2f", name, grade);


    for (int i = 1; i <= 4; i++) {
        scanf("%s %lf", name, &grade);
        fprintf(fp, "\n%s %.2f", name, grade);
    }

    fclose(fp);
    return 0;
}

int readFile(char file_name[]){
    FILE* fp = fopen(file_name,"rt");
        if(fp==NULL){
            perror ('Error');
            return 1;
    }
    char name[50];
    double grade;

    while(!feof(fp)){
        fscanf(fp,"%s %lf",name,&grade);
        printf("%s %.2f\n",name,grade);
    }
    fclose(fp);
    return 0;
}

int appendFile(char file_name[]) {
    FILE* fp = fopen(file_name, "at");

    char name[50];
    double grade;


    scanf("%s,%lf", name, &grade);
    fprintf(fp, "%s %.2f", name, grade);

    fclose(fp);
    return 0;
}




    int main()
    {
    //writeFile("students.txt");
    //return 0;

    //readFile("students.txt");
    //return 0;

    appendFile("students.txt");
    return 0;

}
