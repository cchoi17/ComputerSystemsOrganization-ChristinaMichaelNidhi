// put in 5 , input hi 5 times
#include <stdio.h>
#include <inttypes.h>

uint64_t sayHiTimes(uint64_t x){
    uint64_t count = 0;
    for(int y = 1; y <= x; y++){
        printf("Heyy!"); 
        count++; 
    }
    return count; 
}