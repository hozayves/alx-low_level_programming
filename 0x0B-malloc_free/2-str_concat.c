#include "main.h"
#include <string.h>
/**
 * str_concat - function definition
 *
 * Description: A function that concatenates two strings
 * @s1: string1 parameter
 * @s2: string2 parameter
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i, j;
	char *concat;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	concat = (char *)malloc((sizeof(char) * (size1 + size2)) + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = i; j < size2; j++)
	{
		concat[i] = s2[i];
		i++;
	}
	return (concat);
}
