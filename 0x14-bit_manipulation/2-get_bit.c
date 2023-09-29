#include "main.h"
#include <stdio.h>
/**
* get_bit - getting bits
* @n: numbers of ints
* @index: indexs numbers
* Return: valuee
*/

int get_bit(unsigned long int n, unsigned int index)
{
int getv_s;

if (index > 63)
return (-1);


getv_s = (n >> index) & 1;

return (getv_s);
}
