#include "main.h"
#include <string.h>
/**
 * _strchr - functio definition
 *
 * @s: string parameter
 * @c: character to search parameter
 *
 * Return: c character or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');

}
