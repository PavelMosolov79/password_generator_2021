#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Command_2.h"

void AaBbCc(char ascii_uppercase[], char ascii_lowercase[], int length)
{
    int counter = 0;
    for (int i = 0; i < length; i++) {
        counter = (rand() % 2);
        if (counter == 0) {
            printf("%c", ascii_uppercase[rand() % 26]);
        }
        if (counter == 1) {
            printf("%c", ascii_lowercase[rand() % 26]);
        }
    }
    printf("\n");
}
