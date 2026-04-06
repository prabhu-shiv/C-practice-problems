#include <stdio.h>
#include <assert.h>
#include "Day2.h"

int main()
{
    // ---------- TESTS ----------
    assert(sum_of_digits(12345) == 15);
    assert(reverse_num(12345) == 54321);
    assert(occur(12312132, 3) == 2);

    assert(is_Palindrome(1234321) == IS_PALINDROME);
    assert(is_Palindrome(12344322) == NOT_PALINDROME);

    assert(is_prime(23) == IS_PRIME);
    assert(is_prime(24) == NOT_PRIME);

    gen_prime_number(5);

    assert(sum_of_series(4) == 1234);

    assert(Armstrong_num(153) == IS_ARMSTRONG_NUMBER);
    assert(Armstrong_num(123) == NOT_ARMSTRONG_NUMBER);

    assert(amicable_pair(220, 284) == IS_AMICABLE_PAIR);

    assert(menu_driven_calc('a',1,2) == 3);
    assert(menu_driven_calc('d',1,0) == CAN_NOT_CALCULATE);

    // ---------- VOLUME ----------
    printf("Cube Volume: %.2f\n", calculateCubeVolume(3));
    printf("Sphere Volume: %.2f\n\n", calculateSphereVolume(2));

    // ---------- UTIL ----------
    printf("Electricity Bill (400 units): %d\n\n", electricity_bill(400));

    printf("Binary 1011 -> %d\n", bin_to_dec(1011));
    printf("Decimal 11 -> %lld\n\n", dec_to_bin(11));

    // ---------- SEQUENCE ----------
    sequence(6);

    // ---------- PATTERNS ----------
    inverse_half_pyramid(4);
    half_pyramid(4);

    // ---------- SPECIAL ----------
    two_digit_sum_divisible(9);

    return 0;
}