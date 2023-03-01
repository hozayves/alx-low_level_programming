#include "main.h"
#include <string.h>
/**
 * _strcat - function definition
 *
 * Description: A function that concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest), j;

	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}

	return (dest);

}
