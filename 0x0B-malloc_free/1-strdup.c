#include "main.h"
#include <string.h>
/**
 * _strdup - function definition
 *
 * Description: A function that returns a pointer to newly allocated
 * space in memory,which contains a copy of the string given as a parameter.
 *
 * @str: string parameter
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	duplicate = (char *)malloc((sizeof(char) * size) + 1);
	for (i = 0; i < size; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[size] = '\0';
	return (duplicate);
}
