#include <stdio.h>
#include <assert.h>
#include "lso.h"

int main()
{
    assert(LeftShiftOperator(0) == 1);
    assert(LeftShiftOperator(1) == 2);
    assert(LeftShiftOperator(2) == 4);
    assert(LeftShiftOperator(3) == 8);
    assert(LeftShiftOperator(4) == 16);
    assert(LeftShiftOperator(10) == 1024);

    printf("%d",LeftShiftOperator(9));

    return 0;
}