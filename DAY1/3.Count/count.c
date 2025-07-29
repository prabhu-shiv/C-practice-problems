#include "count.h"

int count(char ch1, char ch2)
{
    int c = ch1 - ch2;
    
    if (c < 0){
        c = -c;
    }
    return (c > 1) ? (c - 1) : 0;
}