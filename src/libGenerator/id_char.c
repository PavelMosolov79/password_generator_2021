#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "id_char.h"

void id_char(
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
            while (digits[i] == '0' || digits[i] == '1') {
                digits[i] = rand() % 10;
            }
            printf("%d", digits[rand() % 10]);
        }
        if (counter == 1) {
            while (ascii_lowercase[i] == 'l') {
                ascii_lowercase[i] = rand() % 26;
            }
            printf("%c", ascii_lowercase[rand() % 26]);
        }
        if (counter == 2) {
            while (ascii_uppercase[i] == 'O') {
                ascii_uppercase[i] = rand() % 26;
            }
            printf("%c", ascii_uppercase[rand() % 26]);
        }
    }
    printf("\n");
}
