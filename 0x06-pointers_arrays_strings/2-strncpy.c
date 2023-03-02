#include "main.h"
/**
 * _strncpy - function definition
 *
 * Description: A function that copies a string
 * @dest: destinatio parameter
 * @src: source parameter
 * @n: numer of chater to copy
 *
 * Return: destination result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
