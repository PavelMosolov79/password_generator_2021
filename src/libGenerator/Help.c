#include "Help.h"
#include <stdio.h>

void Help()
{
    printf("-B - generate a password only from letters (uppercase "
           "/lowercase)\n");
    printf("-E - generate a password without capital letters\n");
    printf("-D - generate password using only one capital letter\n");
    printf("-A - generate password only from numbers\n");
    printf("-C - generate a chaotic password\n");
    printf("-G - exit the program\n");
    printf("-F - change password length \n");
    printf("-H - Generating a password without confusing characters\n");
}
