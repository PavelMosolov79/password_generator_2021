#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Chaos.h"

void Chaos(
        char ascii_uppercase[],
        char ascii_lowercase[],
        int digits[],
        int length)
{
    srand(time(NULL));
    int counter;
    for (int i = 0; i < length; i++) {
        counter = (rand() % 3);
        if (counter == 0) {
            printf("%d", digits[rand() % 10]);
        }
        if (counter == 1) {
            printf("%c", ascii_lowercase[rand() % 26]);
        }
        if (counter == 2) {
            printf("%c", ascii_uppercase[rand() % 26]);
        }
    }
    printf("\n");
}
