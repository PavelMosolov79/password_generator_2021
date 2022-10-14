#include <ctest.h>

#include "libGenerator/arguments.h"
const int size_alphabet = 26;

CTEST(arguments_suite, numeric_suite)
{
    char mode = 'A';
    char ascii_uppercase[size_alphabet];
    for (int i = 'A'; i <= 'Z'; i++)
        ascii_uppercase[i - 'A'] = i;

    char result = arguments(mode, ascii_uppercase);
    char expected = 'A';

    ASSERT_EQUAL(expected, result);
}

CTEST(arguments_suite, AaBbCc_suite)
{
    char mode = 'B';
    char ascii_uppercase[size_alphabet];
    for (int i = 'A'; i <= 'Z'; i++)
        ascii_uppercase[i - 'A'] = i;

    char result = arguments(mode, ascii_uppercase);
    char expected = 'B';

    ASSERT_EQUAL(expected, result);
}

CTEST(arguments_suite, Chaos_suite)
{
    char mode = 'C';
    char ascii_uppercase[size_alphabet];
    for (int i = 'A'; i <= 'Z'; i++)
        ascii_uppercase[i - 'A'] = i;

    char result = arguments(mode, ascii_uppercase);
    char expected = 'C';

    ASSERT_EQUAL(expected, result);
}

CTEST(arguments_suite, One_A_suite)
{
    char mode = 'D';
    char ascii_uppercase[size_alphabet];
    for (int i = 'A'; i <= 'Z'; i++)
        ascii_uppercase[i - 'A'] = i;

    char result = arguments(mode, ascii_uppercase);
    char expected = 'D';

    ASSERT_EQUAL(expected, result);
}
CTEST(arguments_suite, without_cap_suite)
{
    char mode = 'E';
    char ascii_uppercase[size_alphabet];
    for (int i = 'A'; i <= 'Z'; i++)
        ascii_uppercase[i - 'A'] = i;

    char result = arguments(mode, ascii_uppercase);
    char expected = 'E';

    ASSERT_EQUAL(expected, result);
}

CTEST(arguments_suite, id_char_suite)
{
    char mode = 'H';
    char ascii_uppercase[size_alphabet];
    for (int i = 'A'; i <= 'Z'; i++)
        ascii_uppercase[i - 'A'] = i;

    char result = arguments(mode, ascii_uppercase);
    char expected = 'H';

    ASSERT_EQUAL(expected, result);
}
