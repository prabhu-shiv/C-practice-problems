#include "type.h"

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