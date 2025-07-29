#include<stdio.h>
#include<assert.h>
#include "leap.h"

int main()
{
    //checking whether number is even or odd
    assert(is_leapYear(2020) == 1); // true
    assert(is_leapYear(2024) == 0); // assertion fail because 2024 is a leap year
    assert(is_leapYear(2021) == 1); // because of last assertion failed, this will not be considored. but this is also a failed assertionn because 2021 is not a leap year
}
