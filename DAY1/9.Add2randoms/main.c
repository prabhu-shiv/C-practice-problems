#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "RandomAdd.h"

int main()
{
    srand(time(NULL));
    printf("%d", add());
    return 0;
}