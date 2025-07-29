#include <stdio.h>
#include <assert.h>
#include "CtoF.h"

int main()
{
    assert(CtoF(0)==32);
    assert(CtoF(25)==77);
    printf("%f\n",CtoF(0));
    printf("%f",CtoF(25));
}