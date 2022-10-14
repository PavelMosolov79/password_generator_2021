#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Command_1.h"

void numeric(int digits[], int length)
{
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        printf("%d", digits[rand() % 10]);
    }
    printf("\n");
}
