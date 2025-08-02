#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include "Day1.h"

int main()
{
    assert(to_lowercase('A') == 'a'); 

    assert(CircleArea(10.0) == 314.0); // 3.14 * 10 * 10

    assert(count('A', 'E') == 3);  // B, C, D

    assert(CtoF(25)==77);

    assert(is_even(10) == 1);
    assert(is_even(5) == 0);

    assert(is_leapYear(2020) == 1);
    assert(is_leapYear(2021) == 0); 

    assert(LeftShiftOperator(0) == 1);
    assert(LeftShiftOperator(1) == 2);
    assert(LeftShiftOperator(2) == 4);
    assert(LeftShiftOperator(3) == 8);

    assert(datatype('0') == TYPE_INT);
    assert(datatype('A') == TYPE_CHAR);

    srand(time(NULL));
    printf("%d\n", add());

    return 0;
}