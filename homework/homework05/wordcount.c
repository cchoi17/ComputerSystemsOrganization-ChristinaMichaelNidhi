#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) 
{ 
    FILE *file; 
    char ch;
    int wordCount = 0;
    char *fileName = argv[1];

	printf("Counting words in file...\n");
    file=fopen(fileName,"r"); 
    int isSpaceOrLine = 0;
    int isChar = 0;

    if(file==NULL) { 
        printf("File does not exist!");
        return;
    } 
    
    ch=fgetc(file); 
    while(ch!=EOF) { 
        if(ch==' ' || ch=='\n') { 
            if(isSpaceOrLine == 0) {
                wordCount++; 
                isSpaceOrLine = 1;
                isChar = 0;
            } 
        } else {
            isChar = 1;
            isSpaceOrLine = 0;
        }      
        ch=fgetc(file); 
    }
    if(isChar == 1) {
        wordCount++;
    }

    printf("Number of words are : %d\n",wordCount);          
    fclose(file); 
    return;
}