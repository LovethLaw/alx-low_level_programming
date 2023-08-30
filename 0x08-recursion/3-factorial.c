#include "main.h"
/**
 * factorial - Retures to Calculates the factorial number.
 * @n: Number to return the calculated factorial.
 * Return: Facorial number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
