#include "main.h"
#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int total = 0;
    int len = strlen(b);
    int i;

    if (b == NULL)
        return 0;

    for (i = 0; i < len; i++) {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        total += (b[i] - '0') * (1 << (len - i - 1));
    }

    return total;
}
