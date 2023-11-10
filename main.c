#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

    FILE *fp = NULL;
    fp = fopen("sample.txt", "a");
    if (fp == NULL) {
        printf("File not opened\n");
        return 1;
    }
    char a, b, c;
    
    printf("Input a word: ");
    scanf(" %c", &a);
    
    while (getchar() != '\n');
    
    printf("Input a word: ");
    scanf(" %c", &b);
    
    while (getchar() != '\n');
    
    printf("Input a word: ");
    scanf(" %c", &c);
    
    fprintf(fp, "%c%c%c", a, b, c);
    
    fclose(fp);
    
    return 0;
}
