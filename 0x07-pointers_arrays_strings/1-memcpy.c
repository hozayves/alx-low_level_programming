#include "main.h"
/**
 * _memcpy - function defintion
 *
 * Description: A function that copies memory area
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes to copy
 * 
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i, j = 0;

	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
