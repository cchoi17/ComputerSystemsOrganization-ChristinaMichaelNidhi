#include <stdio.h>
int main()
{
    int binaryNum[32] = {0};
 
    int number;
    printf("Enter decimal number: "); 
    scanf("%d", &number);
   
    int i = 0;
    while (number > 0) {
        binaryNum[i] = number % 2;
        number = number / 2;
        i++;
    }
 
    for (int j = 31; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
    
    return 0;
}
