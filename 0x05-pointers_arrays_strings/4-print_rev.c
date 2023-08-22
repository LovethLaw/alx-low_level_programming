#include "main.h"
/**
 * print_rev - the function print a string in reverse
 * @s: string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;

	/*Calculate the length of the string
	 */
	while (*s != '\0')
	{
		len++;
		s++;
	}
	/* Move back to the last character
	 * (before the null terminator) */
	s--;
	/* print the characters in reverse
	 * order */
	while (len > 0)
	{
		_putchar(*s); /* print the current character */
		s--; /* Move to the previous character */
		len--;
	}
	_putchar('\n'); /* print a new line after the reversed string */
}
