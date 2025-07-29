#include "RandomAdd.h"
#include <stdlib.h>
#include<stdio.h>

int add()
{
    int a = rand() % 100;
    printf("%d\n",a);
    int b = rand() % 100;
    printf("%d\n",b);

    return a + b;
}