#include "main.h"

/**
* clear_bit - clears-bit
* @n: numbers
* @index:  indexs-of-number
* Return: value
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
int io = index;

if (io > 63)
return (-1);

*n = (~(1UL << io) & *n);
return (1);
}
