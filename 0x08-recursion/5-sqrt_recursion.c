#include "main.h"
/**
 * find_root - calculates the natural i**i to check with n.
 * @n: The base number.
 * @i: The iterator number.
 * Return: The result of i.
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - calculates the natural square root of n.
 * @n: The base number.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));
}
