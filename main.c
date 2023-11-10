#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(void) {
	FILE *fp = NULL;
	char c;
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
		printf("file not opened\n");
	
	while((c=fgetc(fp)) != EOF)
		putchar(c);
	
	fclose(fp);
}
