#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that display digit of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	putchar('\n');

	return (0);
}
