#include <stdio.h>
#include "library.h"

int main(int argc, char** argv)
{
    hello("Demo");

    printf("distance ((1,2), (4,4)) = %.f\n", distance(1, 2, 4, 4));

    print_zlib();

    return 0;
}
