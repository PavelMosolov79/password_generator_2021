#include <stdio.h>
#include <stdlib.h>

#include "libGenerator/Help.h"
#include "libGenerator/arguments.h"
#include "libGenerator/length.h"
#include "libGenerator/mode.h"

const int size_alphabet = 26;
const int size_digits = 10;

int main()
{
    char ascii_uppercase[size_alphabet];
    char ascii_lowercase[size_alphabet];
    int digits[size_digits];

    for (int i = 'A'; i <= 'Z'; i++)
        ascii_uppercase[i - 'A'] = i;
    for (int i = 'a'; i <= 'z'; i++)
        ascii_lowercase[i - 'a'] = i;
    for (int i = 0; i < 10; i++)
        digits[i] = i;

    printf("\t               Hello User!!!  \n");
    printf("\t =====Unbreakable password generator=====\n ");
    printf("\t         Select the generation mode   \n");

    Help();

    int auxiliary = 0;
    int length = 5;
    char mode;
    do {
        scanf("%c", &mode);
        arguments(mode, ascii_uppercase);
        choice(mode, ascii_uppercase, ascii_lowercase, digits, length);
        length = pass(mode, length);
        if (mode == 'G') {
            auxiliary = 1;
            break;
        }
    } while (auxiliary == 0);
    return 0;
}
