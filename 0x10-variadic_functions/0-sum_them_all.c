#include "variadic_functions.h"

/**
 * sum_them_all - add all the parameters
 * @n: the number of the parameters passed to the function
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
