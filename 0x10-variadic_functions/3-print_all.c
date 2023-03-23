#include "variadic_functions.h"
/**
 * print_all - function definition
 * Description: A function that prints anything
 * @format: lists of types parameters
 * Return: nothings
 */
void print_all(const char * const format, ...)
{
	int i = 0, status;
	char *value;
	va_list pAll;

	va_start(pAll, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pAll, int));
				status = 0;
				break;
			case 'i':
				printf("%d", va_arg(pAll, int));
				status = 0;
				break;
			case 'f':
				printf("%f", va_arg(pAll, double));
				status = 0;
				break;
			case 's':
				value = va_arg(pAll, char *);

				if (value == NULL)
					printf("(nil)");
				else
					printf("%s", value);
				status = 0;
				break;
			default:
				status = 1;
				break;
		}
		if (status == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(pAll);
}
