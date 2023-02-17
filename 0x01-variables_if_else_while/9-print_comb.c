#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A programm that display a single
 * digit number seperated by comma
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
