#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1 = 0;

	while (digit1 < 9)
	{
		int digit2 = digit1 + 1;

		while (digit2 < 10)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 == 8 && digit2 == 9)
				break;
			putchar(',');
			putchar(' ');
			digit2++;
		}
		digit1++;
	}

	putchar('\n');

	return (0);
}
