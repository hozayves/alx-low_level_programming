#include "main.h"
#include <string.h>
/**
 * _strdup - function definition
 *
 * Description: A function that returns a pointer to newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string parameter
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int i, size = strlen(str);
	char *duplicate = (char *)malloc(sizeof(char) * size);
	
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
	free(duplicate);
}
