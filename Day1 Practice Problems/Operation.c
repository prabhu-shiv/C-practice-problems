#include "Day1.h"
#include <stdio.h>
#include <stdlib.h>

char to_lowercase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}


float CircleArea(float r)
{
    float A = PI * r * r;
    return A;
}


int count(char ch1, char ch2)
{
    int c = ch1 - ch2;
    
    if (c < 0){
        c = -c;
    }
    return (c > 1) ? (c - 1) : 0;
}


float CtoF(float c)
{
    float f = (c * 1.8) + 32.0;

    return f;
}


int is_even(const int input)
{
    return !(input%2);
}


int is_leapYear(const int input)
{
    //return !(input%4);
    return !(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int LeftShiftOperator(int n)
{
    return 1 << n;
}


int datatype(char input)
{
    if (input >= '0' && input <= '9')
    {
        return TYPE_INT;
    }
    else
    {
        return TYPE_CHAR;
    }
}


int add()
{
    int a = rand() % 100;
    int b = rand() % 100;

    return a + b;
}
