
#include<stdio.h>
#include<string.h>

int main()
{
    char txt[] = "Hello world!";
    char txt1[13];
    scanf("%s", &txt1);
    printf("String: %s\n", txt1);
    char *txtPntr = txt;
    printf("%c\n", *(txtPntr+6));
    printf("%d\n", strlen(txt));
    strcpy(txtPntr, txt);
    printf("%s\n", txtPntr);
    printf("%d\n", strcmp(txtPntr, txt1));

    printf("%s\n", txtPntr);
    printf("%d", strlen(txtPntr));
    return 0;
}
