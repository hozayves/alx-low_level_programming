#include "main.h"
/**
 * more_numbers - Function definition
 *
 * Description: A function that prints 10 times then numbers, from 0 to 14
 *
 * Return: nothings
 */
void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			int count = j;

			if (j > 9)
			{
				_putchar((j / 10) + '0');
				count = j % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
		i++;
	}
}
