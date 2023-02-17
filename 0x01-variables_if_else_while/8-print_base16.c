#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* base16 prototype */
int base16(void);
/**
 * main - Entry point
 *
 * Description: A program that display a digit of base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	base16();
	return (0);
}
/**
 * base16 - function definition
 *
 * Description: A function that receive nothing
 *
 * Return: nothing
 */
int base16(void)
{
	int i;
	char z;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
