#include "main.h"

/**
* get_endianness - gets end
* Return: pointers
*/

int get_endianness(void)
{
unsigned int cs = 1;
char *vs = (char *) &cs;

return (*vs);
}

