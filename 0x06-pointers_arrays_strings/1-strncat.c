#include "main.h"
#include <string.h>
/**
 * _strncat - function definition
 *
 * Description: A function for concatenate two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: numer of bytes to copy parameter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest), j;

	for (j = 0; j < n; j++)
	{
		dest[i++] = src[j];
	}

	return (dest);
}
