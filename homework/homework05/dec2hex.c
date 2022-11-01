#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *a = argv[1];
    int bitSize = atoi(a);
    
    int number;
    printf("Enter decimal number: "); 
    scanf("%d", &number);

    int rem = 48;
    int i, j, arraySize;
    i=1;
   
    char hexNumber[18] = {};
   
    for (j = 18 ;j> 0;j--) {
        hexNumber[j] = '0';
    }
   
    while(number > 0) {
        rem = number % 16;
        if(rem <= 9) {
            rem = rem + 48;
        } else {
            rem = rem + 55;
        }
        hexNumber[i] = rem;
        i++;
        number = number / 16;
    }
   
   
    if(bitSize == 32) {
        arraySize = 10;
    } else {
        arraySize = 18;
    }
   
    hexNumber[arraySize-1] = 'x';
   
    for (j = arraySize; j> 0; j--) {
        printf("%c",hexNumber[j]);
    }
    printf("\n");
     
    return 0;
}