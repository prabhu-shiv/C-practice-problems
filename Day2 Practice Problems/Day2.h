#ifndef DAY2_H
#define DAY2_H

#define IS_PALINDROME 1
#define NOT_PALINDROME 0

#define IS_PRIME 1
#define NOT_PRIME 0

#define IS_ARMSTRONG_NUMBER 1
#define NOT_ARMSTRONG_NUMBER 0

#define IS_AMICABLE_PAIR 1
#define NOT_AMICABLE_PAIR 0

#define CAN_NOT_CALCULATE 0

#define PI 3.1415

#define RATE_TIER1 5
#define RATE_TIER2 7
#define RATE_TIER3 10

#define FIXED_CHARGE1 1000
#define FIXED_CHARGE2 1700

// Basic functions
int sum_of_digits(int);
int reverse_num(int);
int occur(int, int);
int is_Palindrome(int);
int is_prime(int);
void gen_prime_number(int);
int sum_of_series(int);
int Armstrong_num(int);
int amicable_pair(int, int);
int menu_driven_calc(char, int, int);

// Volume
float calculateCubeVolume(float);
float calculateCuboidVolume(float, float, float);
float calculateSphereVolume(float);
float calculateCylinderVolume(float, float);
float calculateConeVolume(float, float);

// Utilities
int electricity_bill(int);
int bin_to_dec(int);
long long dec_to_bin(int);

// Sequences & patterns
void sequence(int);
void inverse_half_pyramid(int);
void half_pyramid(int);
void two_digit_sum_divisible(int);

#endif