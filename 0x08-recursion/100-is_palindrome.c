#include "main.h"
/**
 * _strlen_recursion - lets Prints the length of a string.
 * @s: The string is allow to be printed
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - is allowed to check if s is recursively for palindrome.
 * @s: The string base need to check.
 * @i: The left index.
 * @j: The rigth index.
 * Return: 1 if s is palindrome, 0 is otherwise.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - is allowed to check if s is recursively for palindrome
 * @s: The base checks for string.
 *
 * Return: 1 if n is prime, 0 is otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
