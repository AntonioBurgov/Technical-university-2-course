#include <stdio.h>
#include <stdlib.h>


int writeBinFile( char file_name[50]){
    char name[50];
    double grade;
    FILE* fp = fopen(file_name,"wb");
    if (fp == NULL){
            perror("Error");
            return 1;
            }

    int count;
    printf("hOW MANY STUDENTS WILL YOU INPUT");
    scanf("%d", &count);
    fwrite(&count, sizeof(count),1,fp);
    for(int i = 0; i< count; i++){
        printf("Enter a student's name and grade;");
        scanf("%s %lf",name,&grade);
        fwrite(name,sizeof(name),1,fp);
        fwrite(&grade,sizeof(grade),1,fp);
    }
    fclose(fp);
    return 0;

}

int readBinFile( char file_name[]){
    char name[50];
    double grade;
    FILE* fp = fopen(file_name,"rb");
    if (fp == NULL){
            perror("Error");
            return 1;
            }

    int count;
    fread(&count, sizeof(count),1,fp);
    printf("Student count: %d\n",count);

    for(int i = 1; i<= count; i++){
        fread(name,sizeof(name),1,fp);
        fread(&grade,sizeof(grade),1,fp);
        printf("%s\t%.2f    ;\n",name,grade);
    }
    fclose(fp);
    return 0;

}





int main()
{
    //writeBinFile("uchenici.bin");
    //return 0;
    readBinFile("uchenici.bin");
    return 0;
}
