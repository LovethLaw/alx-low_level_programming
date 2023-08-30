#include "main.h"
/**
 * str_checker - lets compare if two strings are identical.
 * @s1: The string_1 base is check.
 * @s2: The string_2 base is check.
 * @i: The left index.
 * @j: The special index. (joker)
 * Return: 1 if s is palindrome, 0 is otherwise.
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - lets check if strings could be recursively considered identical
 * @s1: The base check for string.
 * @s2: The base check for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
