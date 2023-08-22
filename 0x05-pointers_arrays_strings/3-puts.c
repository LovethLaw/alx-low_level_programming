#include "main.h"
/**
 * _puts - print string that is followed by new line
 *
 * @str: the prints string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	_putchar('\n');
}
