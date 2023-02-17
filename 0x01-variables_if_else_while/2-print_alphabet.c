#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A programm that listing alphabetic in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
