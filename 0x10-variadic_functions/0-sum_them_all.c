#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of variable arguments.
 *
 * Return: sum of all its parameters or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)

		sum += va_arg(args, unsigned int);
	va_end(args);

	return (sum);
}

