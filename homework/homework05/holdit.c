#include <stdio.h>
#include <time.h>

int main() {
    char input[2];
    int starting_time;
    int ending_time;
    int duration;
    int minutes;
    int seconds;

    printf("This program will time how long you can hold your breath.Take a deep breath, then press the 'Enter' key. When you absolutely have to exhale, press the enter key again. The duration will be displayed in minutes and seconds.");
    fgets(input,2,stdin);      
    starting_time = time(0);
    fgets(input,2,stdin); 
    ending_time = time(0);

    duration = (ending_time - starting_time) / CLOCKS_PER_SEC;
    minutes = duration / 60;
    seconds = duration % 60;
    printf("Duration: %d minutes and %d seconds \n", minutes, seconds);
    printf("%d \n", duration);


    return 0;
}