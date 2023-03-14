#include "main.h"
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
	int size1 = 0, size2 = 0, i;
	char *concat;
	
	size1 = strlen(s1);
	size2 = strlen(s2);
	concat = (char *)malloc((sizeof(char) * (size1 + size2)) + 1);


	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = i; j < size2; j++)
	{
		concat[i] = s2[i];
	}
	return (concat);
}
