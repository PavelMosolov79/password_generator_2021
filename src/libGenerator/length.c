#include <stdio.h>
#include <stdlib.h>

#include "libGenerator/length.h"
int pass(char mode, int length)
{
    int true = 1;
    if (mode == 'F') {
        while (true == 1) {
            printf("Please, enter password length(4-50):");
            scanf("%d", &length);
            if (length < 4 || length > 50) {
                printf("Password cannot be less than one\n");
            } else {
                true = 0;
            }
        }
    }
    return length;
}
