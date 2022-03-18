#include "../include/rec.h"
#include <stdio.h>
void rec(int num) {
    if (num == 1) {
        printf("1");
    } else {
        if (num > 0) {
            rec(num-1);
            } else {
            rec(num+1);
            }
      printf(" %d", num);
    }
}

