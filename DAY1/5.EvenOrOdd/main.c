#include<stdio.h>
#include<assert.h>
#include "EorO.h"

int main()
{
    //checking whether number is even or odd
    assert(is_even(10) == 1);
    assert(is_even(5) == 0);
}
