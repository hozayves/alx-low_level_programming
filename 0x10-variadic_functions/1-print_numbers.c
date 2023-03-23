#include "variadic_functions.h"
/**
 * print_number - function definition
 *
 * Description: A function that prints numbers, followed by newline
 * @separator: separation parameter
 * @n: number of integer parameter
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pNber;

	unsigned int i;

	va_start(pNber, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pNber, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pNber);
}
