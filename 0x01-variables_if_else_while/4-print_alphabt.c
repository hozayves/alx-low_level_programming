#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A programm that display alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
