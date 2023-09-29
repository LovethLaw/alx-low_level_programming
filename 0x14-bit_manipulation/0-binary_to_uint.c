#include "main.h"
#include <string.h>
/**
* binary_to_uint - converting binary to unsigned int
* @b: pointer to the string of binary
* Return: return the converted bit
*/
unsigned int binary_to_uint(const char *b)
{
int decd = 0;
int length = strlen(b), i;
int bases = 1;

if (b == NULL)
return ((size_t)(NULL));

for (i = length - 1; i >= 0; i--)
{
if (b[i] == '0' || b[i] == '1')
{
if (b[i] == '1')
decd += bases; /** dec = 1 + 4**/
bases *= 2; /** 8**/

}
else
{
return (0);
}
}
return (decd);
}
