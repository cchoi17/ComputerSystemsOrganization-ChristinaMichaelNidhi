#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hi, Welcome to CMSI 2210 \n"); 
    printf("Enter your name: ");
    char  name[10];
    gets(name);
    printf("Hello, %s! \n", name);
    return 0;
}
