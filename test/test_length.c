#include <ctest.h>

#include "libGenerator/length.h"

CTEST(lenght_suite, normal_suite)
{
    char mode = 'F';
    int length = 5;
    int real = pass(mode, length);
    int exp1 = 4;
    int exp2 = 50;
    ASSERT_INTERVAL(exp1, exp2, real);
}

CTEST(lenght_suite, left_border_suite)
{
    char mode = 'F';
    int length = 5;
    int result = pass(mode, length);
    int expected = 4;
    ASSERT_EQUAL(expected, result);
}

CTEST(lenght_suite, right_border_suite)
{
    char mode = 'F';
    int length = 5;
    int result = pass(mode, length);
    int expected = 50;
    ASSERT_EQUAL(expected, result);
}
