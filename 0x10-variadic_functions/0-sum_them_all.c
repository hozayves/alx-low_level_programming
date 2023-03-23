#include "variadic_functions.h"
/**
 * sum_them_all - function definition
 *
 * Description: A function that retuens the sum of all its params
 * @n: initial parameter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list(nptr);

	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(nptr, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(nptr, int);

		sum += value;
	}
	va_end(nptr);

	return (sum);
}
