#include "main.h"
/**
 * find_multipliers - let say we look for multipliers of the prime n or not.
 * @n: The base number.
 * @i: The iterator number.
 * Return: 1 if n is prime number, 0 is otherwise.
 */
int find_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (find_multipliers(n, i + 1));
}
/**
 * is_prime_number - calculate if a number is prime recursively
 * @n: The base number.
 *
 * Return: 1 if n is prime, 0 is otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_multipliers(n, 2));
}
