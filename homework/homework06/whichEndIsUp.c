#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]){
    int x = 0x12345678;
    char *p = (char *)&x;
    if(*p==0x78)
        printf("Computer is Little Endian");
    else
        printf("Computer is Big Endian");
    return 0;
}