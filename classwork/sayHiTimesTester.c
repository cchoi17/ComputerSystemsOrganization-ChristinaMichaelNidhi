// tester for SayHiTimes.c
#include <stdio.h>
#include <inttypes.h>
uint64_t sayHiTimes(uint64_t x); 

int main(){
    uint64_t test[]= {2,3,4,5}; 

    printf("%lld\n", sayHiTimes(2));
    printf("%lld\n", sayHiTimes(4));
    printf("%lld\n", sayHiTimes(0));
    printf("%lld\n", sayHiTimes(1));
    return 0;
}