#include "main.h"
/**
 * _memset - function definition
 *
 * Description: A function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled starting from s to be filled
 *
 * Return: (s) as success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
