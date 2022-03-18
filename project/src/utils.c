#include "../include/utils.h"
#include <stdio.h>
size_t timer_from(unsigned int from) {
    size_t counter = 0;
    for (unsigned int i = from; i != 0; i--) {
        printf("%u ", i);
        ++counter;
    }
    printf("%d", 0);
    return counter+1;
}

int custom_pow(int base, int power) {
    int p = 1;
    for (int i = 0; i < power; i++) p *= base;
    return p;
}

