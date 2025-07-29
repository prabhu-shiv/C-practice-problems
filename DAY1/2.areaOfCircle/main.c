#include <stdio.h>
#include <assert.h>
#include "CircleArea.h"

int main(){
    assert(CircleArea(10.0) == 314.0);
    printf("%f",CircleArea(10.0));

    return 0;
}