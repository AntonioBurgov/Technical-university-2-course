#include <stdio.h>
#include <string.h>

void length(char *txt) {
    int length = 0;
    int i;

    for(i = 0; txt[i] != '\0'; i++) {
        length++;
    }

    printf("Length: %d", length);
}

char wordsCount(char *txt) {
    int words = 1;
    int i;
    char space = ' ';
    int len = strlen(txt);

    for (i = 0; i < len; i++) {
        if (space == txt[i]) {
            words++;
        }
    }

    return words;
}

int main() {
    char txt[] = "Hello world!";
    char txt1[13];
    length(txt);
    printf("Number of words: %d\n", wordsCount(txt));
    printf("The letter %ch is on index %d: %d\n", wordsCount(txt));
    return 0;

}
