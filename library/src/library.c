#include <stdio.h>
#include <math.h>
#include <zlib.h>

#include "library.h"

int hello(char* text)
{
    return printf("LIB: %s\n", text);
}

float distance(float x1, float y1, float x2, float y2)
{
    float x_diff = (x1 - x2);
    float y_diff = (y1 - y2);
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

void print_zlib()
{
    printf("LIB: %s\n", zlibVersion());
}
