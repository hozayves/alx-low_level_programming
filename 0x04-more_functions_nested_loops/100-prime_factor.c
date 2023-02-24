#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that finds and prints the largest prime factor
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c = 2, largest = 0;
	unsigned long int n = 612852475143;

	while (n > 1)
	{
		if (n % c == 0)
		{
			if (largest <= c)
				largest = c;
			n /= c;
		}
		else
		{
			c++;
		}
	}
	printf("%d\n", largest);
	return (0);
}
