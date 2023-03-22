#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - function length for string
 * @str: string parameter
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _str_copy - function to copy string
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: dest pointer
 */
char *_str_copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - A function that creates a new dog
 * @name: dog's name parameter
 * @age: dog's age parameter
 * @owner: dog's owner parameter
 *
 * Return: a pointer of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;

	if (!name || !owner)
	{
		return (NULL);
	}
	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);

	_dog->name = (char *)malloc(sizeof(char) * (_strlen(name) + 1));
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = (char *)malloc(sizeof(char) * (_strlen(owner) + 1));
	if (_dog->owner == NULL)
	{
		free(_dog);
		free(_dog->name);
		return (NULL);
	}
	_dog->name = _str_copy(_dog->name, name);
	_dog->age = age;
	_dog->owner = _str_copy(_dog->owner, owner);

	return (_dog);
}
