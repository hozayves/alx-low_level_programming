#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A programm that number from 0 to 9 separed by ,
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i < 10)
		{
			putchar(i);
			putchar(',');
		}
		i++;
	}
	putchar('\n');
}
