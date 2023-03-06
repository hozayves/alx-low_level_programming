#include "main.h"
#include <string.h>
/**
 * _memset - function definition
 *
 * Description: A function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: Number of bytes to be filled starting from s to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
