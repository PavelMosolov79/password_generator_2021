#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "without_cap.h"

void without_cap(char ascii_lowercase[], int digits[], int length)
{
    srand(time(NULL));
    int counter;
    for (int i = 0; i < length; i++) {
        counter = (rand() % 2);
        if (counter == 1) {
            printf("%d", digits[rand() % 10]);
        }
        if (counter == 0) {
            printf("%c", ascii_lowercase[rand() % 26]);
        }
    }
    printf("\n");
}
