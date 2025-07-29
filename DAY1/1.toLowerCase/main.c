#include <stdio.h>
#include <assert.h>
#include "caseconvert.h"

int main()
{
    assert(to_lowercase('A') == 'a');
    assert(to_lowercase('P') == 'p');
    assert(to_lowercase('m') == 'm');
    assert(to_lowercase(' ') == ' ');
    assert(to_lowercase('1') == '1');
    printf("%c",to_lowercase('Z'));

    return 0;
}