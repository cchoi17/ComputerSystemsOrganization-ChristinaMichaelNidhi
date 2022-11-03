#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
 char *a = argv[1];
 
 int number;
 printf("Enter a number you would like the times table up to: ");
 scanf("%d", &number);
 
 for (int i = 2; i <= number; i++) {
   for (int j = 2; j <= number; j++) {
     printf("%8d", i * j);
   }
   printf("\n");
 }
 return 0;
}

