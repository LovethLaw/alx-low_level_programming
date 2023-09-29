#include <stdio.h>
#include "main.h"
/**
* print_binary - prints binaries
* @n: numbers
*/

void print_binary(unsigned long int n)
{
int d;
int nexted = 0;
int numds;

for (d = 63; d >= 0; d--)
{
numds = n >> d;
if (numds & 1)
{
_putchar('1');
nexted++;
}
else if (nexted)
_putchar('0');
}
if (!nexted)
_putchar('0');
}
