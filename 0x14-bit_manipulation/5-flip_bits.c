#include "main.h"

/**
* flip_bits - flipings
* @n: numberis 1
* @m: numbers-2
* Return: value
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int bs, nexted = 0;
unsigned long int nit, pre = n ^ m;

for (bs = 63; bs >= 0; bs--)
{
nit = pre >> bs;
if (nit & 1)
nexted++;
}
return (nexted);
}
