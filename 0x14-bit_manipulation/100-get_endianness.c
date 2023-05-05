#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Description: This function checks the endianness of the system it is run on.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    int num = 1;
    if (*(char *)&num == 1)
        return (1);  
    else
        return (0);   
}
