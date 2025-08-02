#include "Day2.h"
#include <stdio.h>
#include <math.h>

int sum_of_digits(int n)
{	
	int sum = 0;
	while (n){
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}


int reverse_num(int num)
{
	int reverse = 0;
	while (num)
	{
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
		num/=10;
	}
	return count;
}


int is_Palindrome(int num)
{
	if (reverse_num(num) == num)
		return IS_PALINDROME;
	else
		return NOT_PALINDROME;
}


int is_prime(int num)
{
	int n = 2;
	while (n > 1 && n < num)
	{
		if (num % n == 0)
			return NOT_PRIME;
		n++;
	}
	return IS_PRIME;
}


int gen_prime_number(int N)
{
	int count = 0;
	int num = 2;
	while (count < N)
	{
		if (is_prime(num))
		{
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
	for(int i = 0; i < N; i++)
	{
		sum += current;
		printf("%d", current);
        if (i < N - 1)
            printf(" + ");
        else
            printf(" : %d\n\n", sum);
		current = current*10 + 1;
	}
	return sum;
}


int calculateCube(int num) {
    return num * num * num;
}
int Armstrong_num(int num)
{
	int sum = 0;
	int original = num;
	while (num){
		sum += calculateCube(num%10);
		num = num / 10;
	}
	if (sum == original)
	{
		return IS_ARMSTRONG_NUMBER;
	}
	else
	{
		return NOT_ARMSTRONG_NUMBER;
	}
}


int sum_of_divisors(int num)
{
	int n = 1;
	int sum = 0;
	while (n >= 1 && n<= num/2)
	{
		if (num % n == 0)
		{
			sum += n;
		}
		n++;
	}
	return sum;
}
int amicable_pair(int x, int y)
{
	if (sum_of_divisors(x) == y && sum_of_divisors(y) == x)
		return IS_AMICABLE_PAIR;
	else
		return NOT_AMICABLE_PAIR;
}


int menu_driven_calc(char a, int x, int y) 
{
	if (a == 'a')
	{
		return x+y;
	}

	else if (a == 's')
	{
		return x-y;
	}

	else if (a == 'm')
	{
		return x * y;
	}

	else
		return 0;
}


float calculateCubeVolume(float side)
{ 
    return side * side * side;
}
float calculateCuboidVolume(float length, float breadth, float height) 
{ 
    return length * breadth * height;
}
float calculateSphereVolume(float radius) 
{
    return (4.0 / 3.0) * PI * pow(radius, 3);
}
float calculateCylinderVolume(float radius, float height) 
{
    return PI * radius * radius * height; 
}
float calculateConeVolume(float radius, float height) 
{
    return (1.0 / 3.0) * PI * radius * radius * height;
}


int electricity_bill(int units)
{
	int bill;
	while (bill)
	{
		if (units <= 200)
			return units * RATE_TIER1;
		else if (units >200 && units <= 300)
			return (units - 200)*RATE_TIER2 + FIXED_CHARGE1;
		else
			return (units - 300)*RATE_TIER3 + FIXED_CHARGE2;
	}
}


int bin_to_dec(int bin)
{
    int dec = 0;
    int count = 0;
    int temp_bin = bin; 
    while (temp_bin > 0)
    {
        int rem = temp_bin % 10;
        if (rem != 0 && rem != 1)
        {
            printf("Invalid binary number\n");
            return -1;
        }
        dec += rem * pow(2, count);
        count++;
        temp_bin /= 10;
    }
    return dec;
}
long long dec_to_bin(int dec)
{
    if (dec < 0) {
        printf("Binary representation of negative numbers is not supported in this function.\n");
        return -1; 
    }
    long long bin = 0;
    long long place = 1;
    while (dec > 0)
    {
        int rem = dec % 2;
        bin += rem * place; 
        place *= 10;
        dec /= 2;
    }
    return bin;
}


void sequence(int n) {
    int t0 = 0, t1 = 0, t2 = 1;
    int nextTerm;
    int i;
    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
    } else {
        printf("Tribonacci Sequence: ");
        if (n >= 1) {
            printf("%d", t0);
        }
        if (n >= 2) {
            printf(", %d", t1);
        }
        if (n >= 3) {
            printf(", %d", t2);
        }
        for (i = 4; i <= n; i++) {
            nextTerm = t0 + t1 + t2;
            printf(", %d", nextTerm);
            t0 = t1;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n\n");
    }
}


void inverse_half_pyramid(int N)
{
	for(int i = N; i>0; i--)
	{
		for(int j = N;j>0; j--)
		{
			if (j>i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
}


void half_pyramid(int N)
{
	int i =1;
	int j=1;
	while (i <= N) {
        printf("*  ");
        if (j == i)
        {
        	printf("\n");
        	i++;
        	j = 1;
        }
        else
			j++;
    }
    printf("\n\n");
}



void two_digit_sum_nine(int N)
{
	int n;
	for(n=10 ; n<100; n++)
	{
		if (sum_of_digits(n) % N == 0)
			printf("%d " , n);
	}
	printf("\n\n");
}