#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "One_A.h"

void One_A(
        char ascii_uppercase[],
        char ascii_lowercase[],
        int digits[],
        int length)
{
    srand(time(NULL));
    int counter, cl = 0;
    for (int i = 0; i < length; i++) {
    again:
        counter = (rand() % 3);
        if (counter == 0) {
            printf("%d", digits[rand() % 10]);
        }
        if (counter == 1) {
            printf("%c", ascii_lowercase[rand() % 26]);
        }
        if (counter == 2) {
            cl++;
            if (cl == 1) {
                printf("%c", ascii_uppercase[rand() % 26]);
            } else {
                goto again;
            }
        }
    }
    printf("\n");
}
