#include <stdio.h>
#include <stdlib.h>

#include "libGenerator/Chaos.h"
#include "libGenerator/Command_1.h"
#include "libGenerator/Command_2.h"
#include "libGenerator/One_A.h"
#include "libGenerator/id_char.h"
#include "libGenerator/without_cap.h"

void choice(
        char mode,
        char ascii_uppercase[],
        char ascii_lowercase[],
        int digits[],
        int length)
{
    switch (mode) {
    case 'A': {
        numeric(digits, length);
        break;
    }

    case 'B': {
        AaBbCc(ascii_uppercase, ascii_lowercase, length);
        printf("Please, choose another mode or press G to the end the "
               "program\n\n");
        break;
    }

    case 'C': {
        Chaos(ascii_uppercase, ascii_lowercase, digits, length);
        printf("Please, choose another mode or press G to the end the "
               "program\n\n");
        break;
    }

    case 'D': {
        One_A(ascii_uppercase, ascii_lowercase, digits, length);
        printf("Please, choose another mode or press G to the end the "
               "program\n\n");
        break;
    }

    case 'E': {
        without_cap(ascii_lowercase, digits, length);
        printf("Please, choose another mode or press G to the end the "
               "program\n\n");
        break;
    }

    case 'H': {
        id_char(ascii_uppercase, ascii_lowercase, digits, length);
        printf("Please, choose another mode or press G to the end the "
               "program\n\n");
        break;
    }
    }
}
