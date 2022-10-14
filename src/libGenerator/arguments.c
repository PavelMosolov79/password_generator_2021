#include <stdio.h>
#include <stdlib.h>

#include "arguments.h"

int arguments(char mode, char ascii_uppercase[])
{
    if (mode == 'A') {
        return mode;
    }

    if (mode == 'B') {
        return mode;
    }

    if (mode == 'C') {
        return mode;
    }

    if (mode == 'D') {
        return mode;
    }

    if (mode == 'E') {
        return mode;
    }

    if (mode == 'F') {
        return mode;
    }

    if (mode == 'G') {
        return mode;
    }

    if (mode == 'H') {
        return mode;
    }

    for (int i = 8; i < 26; i++) {
        if (mode == ascii_uppercase[i]) {
            printf("Invalid input\n");
        }
    }
    return 0;
}
