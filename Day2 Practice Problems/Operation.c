#include "Day2.h"
#include <stdio.h>
#include <math.h>

// ---------- BASIC ----------

int sum_of_digits(int n)
{
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int reverse_num(int num)
{
    int reverse = 0;
    while (num) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }
    return reverse;
}

int occur(int num, int digit)
{
    int count = 0;
    while (num) {
        if (num % 10 == digit)
            count++;
        num /= 10;
    }
    return count;
}

int is_Palindrome(int num)
{
    return (reverse_num(num) == num) ? IS_PALINDROME : NOT_PALINDROME;
}

int is_prime(int num)
{
    if (num <= 1) return NOT_PRIME;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return NOT_PRIME;
    }
    return IS_PRIME;
}

void gen_prime_number(int N)
{
    int count = 0, num = 2;
    while (count < N) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n\n");
}

int sum_of_series(int N)
{
    int sum = 0, current = 1;

    for (int i = 0; i < N; i++) {
        sum += current;
        printf("%d", current);

        if (i < N - 1)
            printf(" + ");
        else
            printf(" : %d\n\n", sum);

        current = current * 10 + 1;
    }
    return sum;
}

// ---------- ARMSTRONG ----------

int power(int base, int exp)
{
    int result = 1;
    while (exp--) result *= base;
    return result;
}

int Armstrong_num(int num)
{
    int original = num, sum = 0, digits = 0, temp = num;

    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp) {
        int d = temp % 10;
        sum += power(d, digits);
        temp /= 10;
    }

    return (sum == original) ? IS_ARMSTRONG_NUMBER : NOT_ARMSTRONG_NUMBER;
}

// ---------- AMICABLE ----------

int sum_of_divisors(int num)
{
    int sum = 1;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i)
                sum += num / i;
        }
    }
    return sum;
}

int amicable_pair(int x, int y)
{
    return (sum_of_divisors(x) == y && sum_of_divisors(y) == x)
           ? IS_AMICABLE_PAIR : NOT_AMICABLE_PAIR;
}

// ---------- CALCULATOR ----------

int menu_driven_calc(char a, int x, int y)
{
    if (a == 'a') return x + y;
    else if (a == 's') return x - y;
    else if (a == 'm') return x * y;
    else if (a == 'd') {
        if (y == 0) return CAN_NOT_CALCULATE;
        return x / y;
    }
    return CAN_NOT_CALCULATE;
}

// ---------- VOLUME ----------

float calculateCubeVolume(float side)
{
    return side * side * side;
}

float calculateCuboidVolume(float l, float b, float h)
{
    return l * b * h;
}

float calculateSphereVolume(float r)
{
    return (4.0 / 3.0) * PI * pow(r, 3);
}

float calculateCylinderVolume(float r, float h)
{
    return PI * r * r * h;
}

float calculateConeVolume(float r, float h)
{
    return (1.0 / 3.0) * PI * r * r * h;
}

// ---------- UTILITIES ----------

int electricity_bill(int units)
{
    if (units <= 200)
        return units * RATE_TIER1;
    else if (units <= 300)
        return (units - 200) * RATE_TIER2 + FIXED_CHARGE1;
    else
        return (units - 300) * RATE_TIER3 + FIXED_CHARGE2;
}

int bin_to_dec(int bin)
{
    int dec = 0, count = 0;

    while (bin > 0) {
        int rem = bin % 10;

        if (rem != 0 && rem != 1) {
            printf("Invalid binary number\n");
            return -1;
        }

        dec += rem << count;
        count++;
        bin /= 10;
    }
    return dec;
}

long long dec_to_bin(int dec)
{
    if (dec < 0) return -1;

    long long bin = 0, place = 1;

    while (dec > 0) {
        int rem = dec % 2;
        bin += rem * place;
        place *= 10;
        dec /= 2;
    }
    return bin;
}

// ---------- SEQUENCE ----------

void sequence(int n)
{
    int t0 = 0, t1 = 0, t2 = 1;

    if (n <= 0) {
        printf("Enter positive terms\n");
        return;
    }

    printf("Tribonacci: ");

    if (n >= 1) printf("%d", t0);
    if (n >= 2) printf(", %d", t1);
    if (n >= 3) printf(", %d", t2);

    for (int i = 4; i <= n; i++) {
        int next = t0 + t1 + t2;
        printf(", %d", next);
        t0 = t1;
        t1 = t2;
        t2 = next;
    }
    printf("\n\n");
}

// ---------- PATTERNS ----------

void inverse_half_pyramid(int N)
{
    for (int i = N; i > 0; i--) {
        for (int j = N; j > 0; j--) {
            if (j > i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void half_pyramid(int N)
{
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    printf("\n");
}

// ---------- SPECIAL ----------

void two_digit_sum_divisible(int N)
{
    for (int n = 10; n < 100; n++) {
        if (sum_of_digits(n) % N == 0)
            printf("%d ", n);
    }
    printf("\n\n");
}