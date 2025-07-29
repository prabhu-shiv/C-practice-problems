#include <stdio.h>
#include <assert.h>
#include "type.h"

int main()
{
    assert(datatype('0') == TYPE_INT);
    assert(datatype('3') == TYPE_INT);
    assert(datatype('8') == TYPE_INT);
    
    assert(datatype('A') == TYPE_CHAR);
    assert(datatype('c') == TYPE_CHAR);
    assert(datatype(' ') == TYPE_CHAR);

    return 0;
    
}