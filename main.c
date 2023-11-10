#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    fp = fopen("sample.txt", "a");
    if (fp == NULL) {
        printf("File not opened\n");
        return 1;
    }
    char a[100], b[100], c[100];
    
    
    printf("Input a word: ");
    scanf("%s", a);
    
    printf("Input a word: ");
    scanf("%s", b);
    
    printf("Input a word: ");
    scanf("%s", c);
    
    fprintf(fp, "%s %s %s", a, b, c);
    
    fclose(fp);
    
    return 0;
}

