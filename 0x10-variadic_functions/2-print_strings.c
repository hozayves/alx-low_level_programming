#include "variadic_functions.h"
/**
 * print_strings - function definition
 *
 * Description: A function that prints a strings, followed by new line
 * @separator: string separator parameter
 * @n: number of string to print parameter
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pString;
	unsigned int i;

	va_start(pString, n);

	for (i = 0; i < n; i++)
	{
		char *value = va_arg(pString, char *);

		if (value)
			printf("%s", value));
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pString);
}
