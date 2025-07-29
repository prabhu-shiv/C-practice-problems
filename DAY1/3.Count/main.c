#include <stdio.h>
#include <assert.h>
#include "count.h"

int main()
{   
    assert(count('A', 'E') == 3);  // B, C, D
    assert(count('E', 'A') == 3);  // B, C, D
    assert(count('a', 'd') == 2);  // b, c
    assert(count('Z', 'Z') == 0);  // same char
    assert(count('M', 'N') == 0);  // adjacent
    printf("%d", count('A','E'));
}