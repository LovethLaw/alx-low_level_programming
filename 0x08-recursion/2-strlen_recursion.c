#include "main.h"
/**
 * _strlen_recursion - Function is allowed to Prints the length of a string.
 * @s: The string to be printed
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
