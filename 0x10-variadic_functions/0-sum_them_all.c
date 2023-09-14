#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - lets retrun the sum of argument of all its parameters
 * @n: The number of parameters that is passed to the function
 * @...: A varible number of parameters to calaculate sum
 * Return: if n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
